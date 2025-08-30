/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

#include <cmath>
#include <iomanip> // for std::setw and std::setfill
#include <juce_audio_formats/juce_audio_formats.h>

//==============================================================================
// Background thread for saving operations
class SaveThread : public juce::Thread
{
public:
    SaveThread(SoundCollectorAudioProcessor &processor)
        : Thread("SoundCollector Save Thread"), owner(processor) {}

    void run() override
    {
        while (!threadShouldExit())
        {
            // Wait for save request
            if (owner.saveRequestEvent.wait(100)) // 100ms timeout
            {
                // Check if we should exit
                if (owner.saveThreadShouldExit.load())
                    break;

                // Execute the pending save operation
                if (owner.pendingSaveOperation)
                {
                    owner.pendingSaveOperation();
                    owner.pendingSaveOperation = nullptr;
                }
            }
        }
    }

private:
    SoundCollectorAudioProcessor &owner;
};

//==============================================================================
// Timer class for autosave functionality
class AutoSaveTimer : public juce::Timer
{
public:
    AutoSaveTimer(SoundCollectorAudioProcessor &processor) : owner(processor) {}

    void timerCallback() override
    {
        // Debug autosave logic
        DBG("Autosave timer triggered: Enabled=" + juce::String(owner.isAutoSaveEnabled() ? 1 : 0) + " HasEnoughAudio=" + juce::String(owner.hasEnoughAudioToSave() ? 1 : 0) + " MeaningfulSamples=" + juce::String(owner.getMeaningfulAudioSamples()) + " MinRequired=" + juce::String(owner.getMinAudioSamplesForSave()));

        // Only autosave if enabled AND we have enough meaningful audio recorded
        // AND no save operation is currently in progress
        if (owner.isAutoSaveEnabled() && owner.hasEnoughAudioToSave() && !owner.isSaveOperationInProgress())
        {
            DBG("Triggering autosave!");
            // Use a longer delay to ensure audio processing is stable
            juce::Timer::callAfterDelay(50, [this]()
                                        {
                if (owner.isAutoSaveEnabled() && owner.hasEnoughAudioToSave() && !owner.isSaveOperationInProgress()) {
                    owner.saveLastRecording(true); // Pass true for auto-save
                } });
        }
        else
        {
            DBG("Autosave conditions not met - skipping");
        }
    }

private:
    SoundCollectorAudioProcessor &owner;
};

//==============================================================================
SoundCollectorAudioProcessor::SoundCollectorAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
    : AudioProcessor(BusesProperties()
#if !JucePlugin_IsMidiEffect
#if !JucePlugin_IsSynth
                         .withInput("Input", juce::AudioChannelSet::stereo(), true)
#endif
                         .withOutput("Output", juce::AudioChannelSet::stereo(), true)
#endif
                         ),
#endif
      apvts(*this, nullptr, "PARAMS", juce::AudioProcessorValueTreeState::ParameterLayout{}),
      formatManager(), thumbnailCache(5), autoSaveTimer(std::make_unique<AutoSaveTimer>(*this)),
      saveThread(std::make_unique<SaveThread>(*this))
{
    formatManager.registerBasicFormats();
    circularBuffer.setSize(2, maxBufferSamples); // 10 seconds stereo
    circularBuffer.clear();

    // Initialize proper states - don't start timer until audio playback begins
    recording.store(false);
    bufferPaused.store(true);
    audioDetected.store(false);
    meaningfulAudioSamples.store(0);
    hasEnoughAudioForSave.store(false);
    averageInputLevel.store(-60.0f); // Start with silence
    activityWindowSamples.store(0);

    // Start the save thread
    if (saveThread)
        saveThread->startThread();

    DBG("SoundCollector plugin initialized - threshold: " + juce::String(threshold.load()) + "dB");
}

SoundCollectorAudioProcessor::~SoundCollectorAudioProcessor()
{
    if (autoSaveTimer)
        autoSaveTimer->stopTimer();

    // Stop the save thread
    if (saveThread)
    {
        saveThreadShouldExit = true;
        saveRequestEvent.signal();
        saveThread->stopThread(1000); // Wait up to 1 second
    }
}

//==============================================================================
const juce::String SoundCollectorAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

//==============================================================================
void SoundCollectorAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
    lastSampleRate = sampleRate;
    bufferWritePosition = 0;
    recording.store(false);
    bufferPaused.store(true);
    audioDetected.store(false);
    silenceCounter = 0;
    circularBuffer.clear();

    // Compute hold time in samples (e.g., 0.25s)
    const double holdTimeSeconds = 0.25;
    thresholdHoldSamples.store(static_cast<int>(holdTimeSeconds * lastSampleRate));
    holdCountdownSamples.store(0);

    // Set minimum audio samples required for autosave (10 seconds worth)
    minAudioSamplesForSave.store(static_cast<int>(10.0 * lastSampleRate));
    meaningfulAudioSamples.store(0);
    hasEnoughAudioForSave.store(false);
    averageInputLevel.store(-60.0f); // Reset average level
    activityWindowSamples.store(0);

    // Start the autosave timer when audio processing begins
    if (autoSaveTimer)
        autoSaveTimer->startTimer(static_cast<int>(autoSaveDuration.load() * 1000));
}

void SoundCollectorAudioProcessor::releaseResources()
{
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool SoundCollectorAudioProcessor::isBusesLayoutSupported(const BusesLayout &layouts) const
{
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono() && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
#if !JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
#endif

    return true;
}
#endif

void SoundCollectorAudioProcessor::processBlock(juce::AudioBuffer<float> &buffer, juce::MidiBuffer &midiMessages)
{
    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();

    // Clear any output channels that don't have input
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear(i, 0, buffer.getNumSamples());

    // Generate test tone if active
    if (testToneActive.load())
    {
        const float phaseIncrement = 2.0f * juce::MathConstants<float>::pi * testFrequency / lastSampleRate;

        for (int sample = 0; sample < buffer.getNumSamples(); ++sample)
        {
            const float testSample = testGain * std::sin(testPhase);

            // Generate for all output channels (mono or stereo)
            for (int channel = 0; channel < totalNumOutputChannels; ++channel)
            {
                buffer.setSample(channel, sample, testSample);
            }

            testPhase += phaseIncrement;
            if (testPhase >= 2.0f * juce::MathConstants<float>::pi)
                testPhase -= 2.0f * juce::MathConstants<float>::pi;
        }

        // Debug: Log test tone activation (only once per activation)
        static bool testToneDebugLogged = false;
        if (!testToneDebugLogged)
        {
            DBG("Test tone activated - generating 440Hz sine wave at 0.5 gain");
            testToneDebugLogged = true;
        }
    }
    else
    {
        // Reset debug flag when test tone is deactivated
        static bool testToneDebugLogged = false;
        if (testToneDebugLogged)
        {
            DBG("Test tone deactivated - returning to normal input processing");
            testToneDebugLogged = false;
        }
    }

    // Check if we should bypass audio processing during save operations
    if (bypassAudioProcessing.load())
    {
        // Simple pass-through without any processing or recording
        for (int channel = 0; channel < totalNumInputChannels; ++channel)
        {
            buffer.copyFrom(channel, 0, buffer, channel, 0, buffer.getNumSamples());
        }
        outputLevel = inputLevel;
        return;
    }

    // Update input level meter
    if (totalNumInputChannels > 0)
    {
        inputLevel = buffer.getRMSLevel(0, 0, buffer.getNumSamples());
    }
    else
    {
        inputLevel = 0.0f; // No input channels = no audio
    }

    // Convert to dB for threshold compare
    const float inputDb = juce::Decibels::gainToDecibels(juce::jmax(1.0e-8f, inputLevel));

    // Update average input level for activity tracking
    const float alpha = 0.01f; // Smoothing factor
    const float currentAvg = averageInputLevel.load();
    const float newAvg = (alpha * inputDb) + ((1.0f - alpha) * currentAvg);
    averageInputLevel.store(newAvg);

    // Determine if signal crosses threshold (use average for more stable detection)
    const bool gateOpen = (newAvg > threshold.load());

    // Debug: Log every 20 blocks to see what's happening more frequently
    static int debugCounter = 0;
    if (++debugCounter >= 20)
    {
        debugCounter = 0;
        DBG("Input level: " + juce::String(inputLevel) + " dB: " + juce::String(inputDb) + " Avg: " + juce::String(newAvg) + " Threshold: " + juce::String(threshold.load()) + " Gate: " + juce::String(gateOpen ? "OPEN" : "CLOSED") + " Recording: " + juce::String(recording.load() ? "YES" : "NO") + " Paused: " + juce::String(bufferPaused.load() ? "YES" : "NO") + " Hold: " + juce::String(holdCountdownSamples.load()) + " Meaningful: " + juce::String(meaningfulAudioSamples.load()));
    }

    // Hold logic: when gate just opened, keep recording for thresholdHoldSamples even if it dips
    if (gateOpen)
    {
        bufferPaused.store(false);
        recording.store(true);
        holdCountdownSamples.store(thresholdHoldSamples.load());
        audioDetected.store(true);
    }
    else
    {
        if (holdCountdownSamples.load() > 0)
        {
            holdCountdownSamples.store(holdCountdownSamples.load() - buffer.getNumSamples());
            recording.store(true);
            bufferPaused.store(false);
        }
        else
        {
            recording.store(false);
            bufferPaused.store(true);
            audioDetected.store(false);
        }
    }

    // Record to circular buffer if recording (meaningful audio detected)
    if (recording.load())
    {
        const juce::ScopedLock lock(recordingLock);

        for (int sample = 0; sample < buffer.getNumSamples(); ++sample)
        {
            for (int channel = 0; channel < totalNumInputChannels && channel < 2; ++channel)
            {
                const float sampleValue = buffer.getSample(channel, sample);
                circularBuffer.setSample(channel, bufferWritePosition, sampleValue);
            }

            ++bufferWritePosition;
            if (bufferWritePosition >= maxBufferSamples)
            {
                bufferWritePosition = 0;
                bufferFull = true;
            }
        }

        // Track meaningful audio samples (only when gate is actually open, not during hold)
        if (gateOpen)
        {
            meaningfulAudioSamples.store(meaningfulAudioSamples.load() + buffer.getNumSamples());
            DBG("Meaningful audio increment: +" + juce::String(buffer.getNumSamples()) + " samples, total: " + juce::String(meaningfulAudioSamples.load()));
        }
    }

    // Check if we have enough audio for autosave
    bool hasEnough = (meaningfulAudioSamples.load() >= minAudioSamplesForSave.load());
    hasEnoughAudioForSave.store(hasEnough);

    // Remove immediate autosave trigger from audio thread to prevent glitches
    // Let the timer-based autosave handle this instead

    // Pass audio through to output
    for (int channel = 0; channel < totalNumInputChannels; ++channel)
    {
        buffer.copyFrom(channel, 0, buffer, channel, 0, buffer.getNumSamples());
    }

    // Update output level meter (same as input for pass-through)
    outputLevel = inputLevel;
}

//==============================================================================
bool SoundCollectorAudioProcessor::hasEditor() const
{
    return true;
}

juce::AudioProcessorEditor *SoundCollectorAudioProcessor::createEditor()
{
    return new SoundCollectorAudioProcessorEditor(*this);
}

//==============================================================================
void SoundCollectorAudioProcessor::getStateInformation(juce::MemoryBlock &destData)
{
    // Create a ValueTree to store our state
    juce::ValueTree state("SoundCollectorState");

    // Save the session-specific save directory path
    if (customSaveDirectory.exists())
    {
        state.setProperty("sessionSaveDirectory", customSaveDirectory.getFullPathName(), nullptr);
    }

    // Save the session-specific file prefix
    state.setProperty("sessionFilePrefix", sessionFilePrefix, nullptr);

    // Save the test tone state
    state.setProperty("testToneActive", testToneActive.load(), nullptr);

    // Convert the ValueTree to a MemoryBlock
    std::unique_ptr<juce::XmlElement> xml(state.createXml());
    copyXmlToBinary(*xml, destData);

    DBG("Session state saved - Directory: " + customSaveDirectory.getFullPathName() + " Prefix: " + sessionFilePrefix);
}

void SoundCollectorAudioProcessor::setStateInformation(const void *data, int sizeInBytes)
{
    // Create a ValueTree from the saved data
    std::unique_ptr<juce::XmlElement> xmlState(getXmlFromBinary(data, sizeInBytes));

    if (xmlState.get() != nullptr)
    {
        juce::ValueTree state = juce::ValueTree::fromXml(*xmlState);

        // Restore the session-specific save directory
        if (state.hasProperty("sessionSaveDirectory"))
        {
            juce::String dirPath = state.getProperty("sessionSaveDirectory");
            juce::File restoredDir(dirPath);
            if (restoredDir.exists() && restoredDir.isDirectory())
            {
                customSaveDirectory = restoredDir;
                sessionSaveDirectoryPath = dirPath;
                DBG("Restored session save directory: " + customSaveDirectory.getFullPathName());
            }
            else
            {
                DBG("Failed to restore session save directory - path doesn't exist: " + dirPath);
            }
        }

        // Restore the session-specific file prefix
        if (state.hasProperty("sessionFilePrefix"))
        {
            sessionFilePrefix = state.getProperty("sessionFilePrefix");
            DBG("Restored session file prefix: " + sessionFilePrefix);
        }

        // Restore the test tone state
        if (state.hasProperty("testToneActive"))
        {
            bool wasTestToneActive = state.getProperty("testToneActive");
            testToneActive.store(wasTestToneActive);
            DBG("Restored test tone state: " + juce::String(wasTestToneActive ? "ON" : "OFF"));
        }

        // Notify editor that state has been restored
        if (onStateRestoredCallback)
        {
            onStateRestoredCallback();
        }
    }
}

//==============================================================================
void SoundCollectorAudioProcessor::saveLastRecording(bool isAutoSave)
{
    DBG("saveLastRecording called - isAutoSave: " + juce::String(isAutoSave ? "YES" : "NO"));

    // Prevent multiple simultaneous save operations to avoid audio glitches
    if (saveOperationInProgress.load())
    {
        DBG("Save operation already in progress - skipping to prevent audio glitch");
        return;
    }

    // For autosave, also check if we have enough meaningful audio
    if (isAutoSave && !hasEnoughAudioToSave())
    {
        DBG("Autosave requested but not enough meaningful audio - skipping");
        return;
    }

    // Enable bypass mode to prevent audio glitches during save
    bypassAudioProcessing.store(true);
    DBG("Bypass mode enabled for save operation");

    // Create a lambda that captures the current buffer state and performs the save
    auto saveOperation = [this, isAutoSave]()
    {
        saveOperationInProgress.store(true);
        performSaveOperation(isAutoSave);
        saveOperationInProgress.store(false);

        // Re-enable audio processing after save completes
        bypassAudioProcessing.store(false);
        DBG("Bypass mode disabled after save operation");
    };

    // Schedule the save operation on the background thread
    pendingSaveOperation = saveOperation;
    saveRequestEvent.signal();
}

//==============================================================================
void SoundCollectorAudioProcessor::performSaveOperation(bool isAutoSave)
{
    DBG("performSaveOperation called - isAutoSave: " + juce::String(isAutoSave ? "YES" : "NO"));

    // Get prefix from session state with safe fallback
    juce::String prefix = sessionFilePrefix;
    if (prefix.isEmpty() || prefix == "Untitled" || prefix == "Untitled")
    {
        prefix = "Untitled";
    }

    juce::File saveDir = getUserSaveDirectory();
    if (!saveDir.exists())
        saveDir = juce::File::getSpecialLocation(juce::File::userDesktopDirectory);

    juce::File saveFile;
    juce::String filename;

    if (isAutoSave)
    {
        // Autosave: Use daily rolling filename (YYYY-MM-DD format)
        juce::Time currentTime = juce::Time::getCurrentTime();
        juce::String dateString = formatDateForFilename(currentTime);
        filename = prefix + "_" + dateString + ".wav";
        saveFile = saveDir.getChildFile(filename);

        // For autosave, delete the existing file to ensure we start fresh
        if (saveFile.existsAsFile())
        {
            if (saveFile.deleteFile())
            {
                DBG("Autosave: Deleted existing file: " + filename);
            }
            else
            {
                DBG("Autosave: Failed to delete existing file: " + filename);
            }
        }

        DBG("=== AUTOSAVE DEBUG ===");
        DBG("Prefix: " + prefix);
        DBG("Current time: " + currentTime.toString(true, true, true, true));
        DBG("Formatted date: " + dateString);
        DBG("Final filename: " + filename);
        DBG("Save directory: " + saveDir.getFullPathName());
        DBG("Full path: " + saveFile.getFullPathName());
        DBG("=====================");
    }
    else
    {
        // Manual save: Use timestamped filename (existing behavior)
        juce::String timestamp = juce::Time::getCurrentTime().toString(true, true);
        timestamp = timestamp.replaceCharacter(':', '-'); // File safe
        filename = prefix + "_" + timestamp + ".wav";
        saveFile = saveDir.getChildFile(filename);

        DBG("Manual save using timestamped filename: " + filename);
    }

    // Create a temporary buffer with the recorded audio
    juce::AudioBuffer<float> tempBuffer(2, maxBufferSamples);
    tempBuffer.clear();

    // Take a snapshot of the buffer state with minimal lock time
    int samplesToWrite = 0;
    bool wasBufferFull = false;
    int snapshotWritePosition = 0;
    int startPosition = 0;

    {
        const juce::ScopedLock lock(recordingLock);

        wasBufferFull = bufferFull;
        snapshotWritePosition = bufferWritePosition;

        if (isAutoSave)
        {
            // For autosave, always save the most recent 10 seconds (entire buffer)
            if (wasBufferFull)
            {
                samplesToWrite = maxBufferSamples;
                // For full buffer, start from the oldest position (current write position)
                // This gives us the most recent 10 seconds in chronological order
                startPosition = snapshotWritePosition;
                DBG("Autosave: Full buffer - saving " + juce::String(samplesToWrite) +
                    " samples starting from position " + juce::String(startPosition));
            }
            else
            {
                samplesToWrite = snapshotWritePosition;
                startPosition = 0;
                DBG("Autosave: Partial buffer - saving " + juce::String(samplesToWrite) +
                    " samples starting from position " + juce::String(startPosition));
            }
        }
        else
        {
            // For manual save, save the entire buffer
            if (wasBufferFull)
            {
                samplesToWrite = maxBufferSamples;
                startPosition = snapshotWritePosition; // Start from current position for circular buffer
            }
            else
            {
                samplesToWrite = snapshotWritePosition;
                startPosition = 0;
            }
        }
    }

    // Copy the audio data with minimal lock time - use tryEnter to avoid blocking
    if (recordingLock.tryEnter())
    {
        if (wasBufferFull)
        {
            // For full buffer, copy the entire circular buffer correctly
            // Start from the oldest position and read forward to get chronological order
            for (int sample = 0; sample < maxBufferSamples; ++sample)
            {
                // For a full circular buffer, the oldest sample is at the current write position
                // We read forward from there to get the most recent 10 seconds in chronological order
                // This ensures we get the latest audio content
                int readPos = (snapshotWritePosition + sample) % maxBufferSamples;
                for (int channel = 0; channel < 2; ++channel)
                {
                    tempBuffer.setSample(channel, sample, circularBuffer.getSample(channel, readPos));
                }
            }

            DBG("Full buffer save: WritePos=" + juce::String(snapshotWritePosition) +
                " Samples=" + juce::String(maxBufferSamples) +
                " Reading from oldest position for chronological order");
        }
        else
        {
            // Copy the audio from startPosition to startPosition + samplesToWrite
            for (int sample = 0; sample < samplesToWrite; ++sample)
            {
                int readPos = (startPosition + sample) % maxBufferSamples;
                for (int channel = 0; channel < 2; ++channel)
                {
                    tempBuffer.setSample(channel, sample, circularBuffer.getSample(channel, readPos));
                }
            }
        }
        recordingLock.exit();
    }
    else
    {
        // If we can't get the lock, skip this save to avoid audio glitches
        DBG("Could not acquire recording lock for save - skipping to prevent audio glitch");
        return;
    }

    // Create WAV writer
    std::unique_ptr<juce::AudioFormatWriter> writer;
    if (auto *wavFormat = formatManager.findFormatForFileExtension("wav"))
    {
        writer.reset(wavFormat->createWriterFor(new juce::FileOutputStream(saveFile),
                                                lastSampleRate, 2, 24, {}, 0));
    }

    if (writer != nullptr)
    {
        if (samplesToWrite > 0)
        {
            writer->writeFromAudioSampleBuffer(tempBuffer, 0, samplesToWrite);
            writer->flush();

            // Log whether we're overwriting or creating a new file
            if (isAutoSave)
            {
                if (saveFile.existsAsFile())
                {
                    DBG("Autosave: Overwriting existing daily file: " + filename);
                }
                else
                {
                    DBG("Autosave: Creating new daily file: " + filename);
                }
            }
        }
    }

    // Call the save callback if set (on message thread)
    if (onSaveCallback)
    {
        onSaveCallback(isAutoSave ? "Auto Save" : "Quick Save");
    }

    // For auto-save, reset the meaningful audio counter and clear the buffer
    if (isAutoSave)
    {
        // Clear the circular buffer to prevent accumulation of audio
        const juce::ScopedLock lock(recordingLock);
        circularBuffer.clear();
        bufferWritePosition = 0;
        bufferFull = false;

        // Reset the meaningful audio counter since we've saved all the audio
        meaningfulAudioSamples.store(0);
        hasEnoughAudioForSave.store(false);

        DBG("Auto-save completed - saved " + juce::String(samplesToWrite) + " samples");
        DBG("Reset meaningful audio counter to 0 and cleared buffer");
        DBG("Buffer cleared - next recording will start fresh");

        // Restart the autosave timer to ensure it continues working
        if (autoSaveTimer)
        {
            autoSaveTimer->stopTimer();
            autoSaveTimer->startTimer(static_cast<int>(autoSaveDuration.load() * 1000));
            DBG("Restarted autosave timer for next cycle");
        }
    }
}

void SoundCollectorAudioProcessor::setUserSaveDirectoryAndPersist(const juce::File &dir)
{
    customSaveDirectory = dir;
    sessionSaveDirectoryPath = dir.getFullPathName();
    DBG("Session save directory set: " + sessionSaveDirectoryPath);
}

//==============================================================================
// Additional required method implementations
bool SoundCollectorAudioProcessor::acceptsMidi() const { return false; }
bool SoundCollectorAudioProcessor::producesMidi() const { return false; }
bool SoundCollectorAudioProcessor::isMidiEffect() const { return false; }
double SoundCollectorAudioProcessor::getTailLengthSeconds() const { return 0.0; }

int SoundCollectorAudioProcessor::getNumPrograms() { return 1; }
int SoundCollectorAudioProcessor::getCurrentProgram() { return 0; }
void SoundCollectorAudioProcessor::setCurrentProgram(int index) { juce::ignoreUnused(index); }
const juce::String SoundCollectorAudioProcessor::getProgramName(int index)
{
    juce::ignoreUnused(index);
    return {};
}
void SoundCollectorAudioProcessor::changeProgramName(int index, const juce::String &newName) { juce::ignoreUnused(index, newName); }

void SoundCollectorAudioProcessor::startContinuousRecording() { recording = true; }
void SoundCollectorAudioProcessor::stopContinuousRecording() { recording = false; }
void SoundCollectorAudioProcessor::saveLastRecordingWithDuration(float duration)
{
    juce::ignoreUnused(duration);
    saveLastRecording(false);
}

juce::String SoundCollectorAudioProcessor::getProjectName() const { return "SoundCollector"; }
juce::File SoundCollectorAudioProcessor::getSaveDirectory() const { return getUserSaveDirectory(); }
juce::File SoundCollectorAudioProcessor::getSessionDirectory() const { return juce::File::getCurrentWorkingDirectory(); }

//==============================================================================
// Helper method to format date consistently for filenames
juce::String SoundCollectorAudioProcessor::formatDateForFilename(const juce::Time &time)
{
    // Format: YYYY-MM-DD (local time, not UTC)
    // Use explicit formatting to ensure correct YYYY-MM-DD format
    int year = time.getYear();
    int month = time.getMonth() + 1; // JUCE months are 0-based
    int day = time.getDayOfMonth();

    juce::String formattedDate = juce::String(year) + "-" +
                                 juce::String(month).paddedLeft('0', 2) + "-" +
                                 juce::String(day).paddedLeft('0', 2);

    DBG("Date formatting: Year=" + juce::String(year) + " Month=" + juce::String(month) + " Day=" + juce::String(day) + " Result=" + formattedDate);

    return formattedDate;
}

//==============================================================================
juce::AudioProcessor *JUCE_CALLTYPE createPluginFilter()
{
    return new SoundCollectorAudioProcessor();
}
