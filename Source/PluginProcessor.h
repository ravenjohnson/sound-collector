/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/**
*/
class SoundCollectorAudioProcessor  : public juce::AudioProcessor
{
public:
    //==============================================================================
    SoundCollectorAudioProcessor();
    ~SoundCollectorAudioProcessor() override;

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    //==============================================================================
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const juce::String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const juce::String getProgramName (int index) override;
    void changeProgramName (int index, const juce::String& newName) override;

    //==============================================================================
    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

    //==============================================================================
    // Level metering getters
    float getInputLevel() const { return inputLevel; }
    float getOutputLevel() const { return outputLevel; }



    //==============================================================================
    // Recording control
    void startContinuousRecording();
    void stopContinuousRecording();
    bool isRecording() const { return recording; }
    bool isBufferPaused() const { return bufferPaused; }
    bool hasEnoughAudioToSave() const { return hasEnoughAudioForSave; }
    void saveLastRecording(bool isAutoSave = false); // Save the last 10 seconds of audio
    void saveLastRecordingWithDuration(float duration); // Save with custom duration
    void setBufferDuration(float seconds) { bufferDuration = seconds; }
    float getBufferDuration() const { return bufferDuration; }

    //==============================================================================
    // Automatic saving functionality
    void enableAutoSave(bool enable) { autoSaveEnabled = enable; }
    bool isAutoSaveEnabled() const { return autoSaveEnabled; }
    void setAutoSaveDuration(float seconds) { autoSaveDuration = seconds; }
    float getAutoSaveDuration() const { return autoSaveDuration; }

    // Debug getters
    int getMeaningfulAudioSamples() const { return meaningfulAudioSamples.load(); }
    int getMinAudioSamplesForSave() const { return minAudioSamplesForSave.load(); }

    //==============================================================================
    // Editor notification callback
    std::function<void(const juce::String&)> onSaveCallback;
    void setSaveCallback(std::function<void(const juce::String&)> callback) { onSaveCallback = callback; }

    // File prefix callback for manual saves
    std::function<juce::String()> getFilePrefixCallback;
    void setFilePrefixCallback(std::function<juce::String()> callback) { getFilePrefixCallback = callback; }

    // Project name detection
    juce::String getProjectName() const;

    // Save directory management
    void setUserSaveDirectory(const juce::File& directory) { customSaveDirectory = directory; }
    void setUserSaveDirectoryAndPersist(const juce::File& directory);
    juce::File getUserSaveDirectory() const { return customSaveDirectory; }
    juce::File getSaveDirectory() const;
    juce::File getSessionDirectory() const;

private:
    //==============================================================================
    // Level metering for verification
    float inputLevel = 0.0f;
    float outputLevel = 0.0f;

    // Threshold parameter (in dB, where 0.0 = no threshold, -50.0 = very sensitive for dynamic audio)
    std::atomic<float> threshold{-50.0f}; // Default to -50dB (much more sensitive for dynamic audio)

    // Continuous recording functionality (Tesla dashcam style)
    std::atomic<bool> recording{false};
    std::atomic<bool> bufferPaused{true}; // Whether buffer recording is currently paused
    std::atomic<float> bufferDuration{10.0f}; // Default 10 seconds buffer
    double sampleRate = 44100.0;
    int bufferSize = 0; // Total size of circular buffer
    int writePosition = 0; // Current write position in circular buffer
    bool bufferFull = false; // Whether the buffer has been filled once

    // Circular buffer for continuous recording
    juce::AudioBuffer<float> circularBuffer;
    juce::CriticalSection recordingLock;

    //==============================================================================
    // Automatic saving functionality / threshold gating
    std::atomic<bool> autoSaveEnabled{true};
    std::atomic<float> autoSaveDuration{10.0f}; // Default 10 seconds
    std::atomic<bool> audioDetected{false};
    std::atomic<int> thresholdHoldSamples{0}; // Hold time in samples
    std::atomic<int> holdCountdownSamples{0}; // Current hold countdown

    // Track meaningful audio recording duration
    std::atomic<int> meaningfulAudioSamples{0}; // Total samples of meaningful audio recorded
    std::atomic<int> minAudioSamplesForSave{0}; // Minimum samples required before autosave
    std::atomic<bool> hasEnoughAudioForSave{false}; // Whether we have enough audio to save

    // Audio activity tracking for dynamic audio
    std::atomic<float> averageInputLevel{0.0f};
    std::atomic<int> activityWindowSamples{0};
    static constexpr int ACTIVITY_WINDOW_SIZE = 44100; // 1 second at 44.1kHz

    // State management (parameters/preferences)
    juce::AudioProcessorValueTreeState apvts;
    juce::File customSaveDirectory; // User-selected custom directory

    // Audio and buffer handling
    juce::AudioFormatManager formatManager;
    juce::AudioThumbnailCache thumbnailCache { 5 }; // Used for visual waveform caching

    juce::AudioSampleBuffer buffer;
    int bufferWritePosition = 0;
    double lastSampleRate = 44100.0;
    int silenceCounter = 0;

    int maxBufferSamples = 10 * 44100;       // 10 seconds buffer at 44.1kHz

    // Editor pointer for callbacks
    juce::AudioProcessorEditor* editor = nullptr;

    // Autosave timer
    std::unique_ptr<juce::Timer> autoSaveTimer;

    // Test tone for debugging
    float testPhase = 0.0f;
    float testFrequency = 440.0f; // A4 tone
    float testGain = 0.5f;
    bool testToneActive = false;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SoundCollectorAudioProcessor)
};
