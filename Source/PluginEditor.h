/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

#include "UI/LevelMeterComponent.h"

// Forward declaration
class SoundCollectorAudioProcessorEditor;

//==============================================================================
// Timer class for updating meters
class MeterTimer : public juce::Timer
{
public:
    MeterTimer(SoundCollectorAudioProcessorEditor& editor);
    void timerCallback() override;

private:
    SoundCollectorAudioProcessorEditor& owner;
    friend class SoundCollectorAudioProcessorEditor;
};

//==============================================================================
/**
*/
class SoundCollectorAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                           public juce::Button::Listener,
                                           public juce::TextEditor::Listener,
                                           public juce::Timer
{
public:
    SoundCollectorAudioProcessorEditor (SoundCollectorAudioProcessor&);
    ~SoundCollectorAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    //==============================================================================
    // Button listener callback
    void buttonClicked(juce::Button* button) override;

    //==============================================================================
    // Text editor listener callback
    void textEditorTextChanged(juce::TextEditor& editor) override;

    //==============================================================================
    // Mouse listener callback (overrides Component::mouseDown)
    void mouseDown(const juce::MouseEvent& event) override;

    //==============================================================================
    // Update auto-save timestamp
    void updateAutoSaveTimestamp();

    //==============================================================================
    // Timestamp display methods
    void showSaveTimestamp(const juce::String& saveType);

    //==============================================================================
    // 🆕 Get the file prefix from the input field
    juce::String getFilePrefix() const { return filePrefixInput.getText(); }

    //==============================================================================
    // Sync UI with processor state (for restored sessions)
    void syncUIWithProcessorState();

    // Background image loading
    void loadBackgroundImage();

    // Timer callback implementation
    void timerCallback() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SoundCollectorAudioProcessor& audioProcessor;

    // File chooser
    std::unique_ptr<juce::FileChooser> directoryChooser;

    // Subcomponents
    LevelMeterComponent levelMeterComponent;

    // Header components
    juce::TextButton settingsButton;
    juce::TextEditor filePrefixInput;

    // Status display components
    juce::TextButton recordButton;
    juce::ToggleButton testToneToggle;
    juce::Label recordingStatusLabel;
    juce::Label lastSaveLabel;
    juce::Label lastSaveTitleLabel;

    // Footer components
    juce::Label bufferLabel;
    juce::Label autoSaveLabel;
    juce::Label versionLabel;

    // Background image
    juce::Image backgroundImage;

    // Timer for updating meters
    std::unique_ptr<MeterTimer> meterTimer;

    // Friend class for timer access
    friend class MeterTimer;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SoundCollectorAudioProcessorEditor)
};