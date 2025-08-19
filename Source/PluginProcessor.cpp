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
// Timer class for autosave functionality
class AutoSaveTimer : public juce::Timer
{
public:
    AutoSaveTimer(SoundCollectorAudioProcessor& processor) : owner(processor) {}

    void timerCallback() override
    {
        // Debug autosave logic
        DBG("Autosave timer triggered: Enabled=" + juce::String(owner.isAutoSaveEnabled() ? 1 : 0)
            + " HasEnoughAudio=" + juce::String(owner.hasEnoughAudioToSave() ? 1 : 0)
            + " MeaningfulSamples=" + juce::String(owner.getMeaningfulAudioSamples())
            + " MinRequired=" + juce::String(owner.getMinAudioSamplesForSave()));

        // Only autosave if enabled AND we have enough meaningful audio recorded
        if (owner.isAutoSaveEnabled() && owner.hasEnoughAudioToSave())
        {
            DBG("Triggering autosave!");
            owner.saveLastRecording(true); // Pass true for auto-save
        }
        else
        {
            DBG("Autosave conditions not met - skipping");
        }
    }

private:
    SoundCollectorAudioProcessor& owner;
};

//==============================================================================
SoundCollectorAudioProcessor::SoundCollectorAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                       #if ! JucePlugin_IsMidiEffect
                        #if ! JucePlugin_IsSynth
                        .withInput  ("Input",  juce::AudioChannelSet::stereo(), true)
                        #endif
                        .withOutput ("Output", juce::AudioChannelSet::stereo(), true)
                       #endif
                       ),
#endif
       apvts(*this, nullptr, "PARAMS", juce::AudioProcessorValueTreeState::ParameterLayout{}),
       formatManager(), thumbnailCache(5), autoSaveTimer(std::make_unique<AutoSaveTimer>(*this))
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

    DBG("SoundCollector plugin initialized - threshold: " + juce::String(threshold.load()) + "dB");
}

SoundCollectorAudioProcessor::~SoundCollectorAudioProcessor()
{
    if (autoSaveTimer)
        autoSaveTimer->stopTimer();
}

//==============================================================================
const juce::String SoundCollectorAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

//==============================================================================
void SoundCollectorAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
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
bool SoundCollectorAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
}
#endif

void SoundCollectorAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();

    // Clear any output channels that don't have input
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear (i, 0, buffer.getNumSamples());

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
    if (++debugCounter >= 20) {
        debugCounter = 0;
        DBG("Input level: " + juce::String(inputLevel) + " dB: " + juce::String(inputDb) + " Avg: " + juce::String(newAvg) + " Threshold: " + juce::String(threshold.load())
            + " Gate: " + juce::String(gateOpen ? "OPEN" : "CLOSED") + " Recording: " + juce::String(recording.load() ? "YES" : "NO")
            + " Paused: " + juce::String(bufferPaused.load() ? "YES" : "NO") + " Hold: " + juce::String(holdCountdownSamples.load())
            + " Meaningful: " + juce::String(meaningfulAudioSamples.load()));
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
    if (hasEnough && !hasEnoughAudioForSave.load())
    {
        DBG("ENOUGH AUDIO FOR AUTOSAVE! Meaningful: " + juce::String(meaningfulAudioSamples.load()) + " Min required: " + juce::String(minAudioSamplesForSave.load()));
    }

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

juce::AudioProcessorEditor* SoundCollectorAudioProcessor::createEditor()
{
    return new SoundCollectorAudioProcessorEditor(*this);
}

//==============================================================================
void SoundCollectorAudioProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    // Create a ValueTree to store our state
    juce::ValueTree state("SoundCollectorState");

    // Save the custom save directory path
    if (customSaveDirectory.exists())
    {
        state.setProperty("customSaveDirectory", customSaveDirectory.getFullPathName(), nullptr);
    }

    // Save the file prefix
    state.setProperty("filePrefix", persistentFilePrefix, nullptr);

    // Save the test tone state
    state.setProperty("testToneActive", testToneActive.load(), nullptr);

    // Convert the ValueTree to a MemoryBlock
    std::unique_ptr<juce::XmlElement> xml(state.createXml());
    copyXmlToBinary(*xml, destData);

    DBG("State saved - Directory: " + customSaveDirectory.getFullPathName() + " Prefix: " + persistentFilePrefix);
}

void SoundCollectorAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // Create a ValueTree from the saved data
    std::unique_ptr<juce::XmlElement> xmlState(getXmlFromBinary(data, sizeInBytes));

    if (xmlState.get() != nullptr)
    {
        juce::ValueTree state = juce::ValueTree::fromXml(*xmlState);

            // Restore the custom save directory
    if (state.hasProperty("customSaveDirectory"))
    {
        juce::String dirPath = state.getProperty("customSaveDirectory");
        juce::File restoredDir(dirPath);
        if (restoredDir.exists() && restoredDir.isDirectory())
        {
            customSaveDirectory = restoredDir;
            persistentSaveDirectoryPath = dirPath;
            DBG("Restored save directory: " + customSaveDirectory.getFullPathName());
        }
        else
        {
            DBG("Failed to restore save directory - path doesn't exist: " + dirPath);
        }
    }

        // Restore the file prefix
        if (state.hasProperty("filePrefix"))
        {
            persistentFilePrefix = state.getProperty("filePrefix");
            DBG("Restored file prefix: " + persistentFilePrefix);
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

    // Get prefix from persistent state, with fallback to callback for backward compatibility
    juce::String prefix = persistentFilePrefix;
    if (prefix.isEmpty() || prefix == "Idea")
    {
        // Fallback to callback if persistent prefix is not set
        if (getFilePrefixCallback)
        {
            prefix = getFilePrefixCallback();
        }
        // Final fallback
        if (prefix.isEmpty() || prefix == "Idea")
        {
            prefix = isAutoSave ? "AutoSave" : "SoundCollector";
        }
    }

    juce::String timestamp = juce::Time::getCurrentTime().toString(true, true);
    timestamp = timestamp.replaceCharacter(':', '-'); // File safe

    juce::String filename = prefix + "_" + timestamp + ".wav";

    juce::File saveDir = getUserSaveDirectory();
    if (!saveDir.exists())
        saveDir = juce::File::getSpecialLocation(juce::File::userDesktopDirectory);

    juce::File saveFile = saveDir.getChildFile(filename);

    // Create a temporary buffer with the recorded audio
    juce::AudioBuffer<float> tempBuffer(2, maxBufferSamples);
    tempBuffer.clear();

    const juce::ScopedLock lock(recordingLock);

    if (bufferFull)
    {
        // Copy the entire circular buffer
        for (int sample = 0; sample < maxBufferSamples; ++sample)
        {
            int readPos = (bufferWritePosition + sample) % maxBufferSamples;
            for (int channel = 0; channel < 2; ++channel)
            {
                tempBuffer.setSample(channel, sample, circularBuffer.getSample(channel, readPos));
            }
        }
    }
    else
    {
        // Copy only the recorded portion
        for (int sample = 0; sample < bufferWritePosition; ++sample)
        {
            for (int channel = 0; channel < 2; ++channel)
            {
                tempBuffer.setSample(channel, sample, circularBuffer.getSample(channel, sample));
            }
        }
    }

    // Create WAV writer
    std::unique_ptr<juce::AudioFormatWriter> writer;
    if (auto* wavFormat = formatManager.findFormatForFileExtension("wav"))
    {
        writer.reset(wavFormat->createWriterFor(new juce::FileOutputStream(saveFile),
                                               lastSampleRate, 2, 24, {}, 0));
    }

    if (writer != nullptr)
    {
        int samplesToWrite = bufferFull ? maxBufferSamples : bufferWritePosition;
        if (samplesToWrite > 0)
        {
            writer->writeFromAudioSampleBuffer(tempBuffer, 0, samplesToWrite);
            writer->flush();
        }
    }

    // Call the save callback if set
    if (onSaveCallback)
    {
        onSaveCallback(isAutoSave ? "Auto Save" : "Manual Save");
    }

    // Reset meaningful audio counter only after auto-save, not manual save
    if (isAutoSave)
    {
        meaningfulAudioSamples.store(0);
        hasEnoughAudioForSave.store(false);
        DBG("Auto-save completed - resetting meaningful audio counter");
    }
}

void SoundCollectorAudioProcessor::setUserSaveDirectoryAndPersist(const juce::File& dir)
{
    customSaveDirectory = dir;
    persistentSaveDirectoryPath = dir.getFullPathName();
    DBG("Save directory set and persisted: " + persistentSaveDirectoryPath);
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
const juce::String SoundCollectorAudioProcessor::getProgramName(int index) { juce::ignoreUnused(index); return {}; }
void SoundCollectorAudioProcessor::changeProgramName(int index, const juce::String& newName) { juce::ignoreUnused(index, newName); }

void SoundCollectorAudioProcessor::startContinuousRecording() { recording = true; }
void SoundCollectorAudioProcessor::stopContinuousRecording() { recording = false; }
void SoundCollectorAudioProcessor::saveLastRecordingWithDuration(float duration) { juce::ignoreUnused(duration); saveLastRecording(false); }

juce::String SoundCollectorAudioProcessor::getProjectName() const { return "SoundCollector"; }
juce::File SoundCollectorAudioProcessor::getSaveDirectory() const { return getUserSaveDirectory(); }
juce::File SoundCollectorAudioProcessor::getSessionDirectory() const { return juce::File::getCurrentWorkingDirectory(); }

//==============================================================================
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new SoundCollectorAudioProcessor();
}