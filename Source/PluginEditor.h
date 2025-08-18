/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

#include "UI/LevelMeterComponent.h"
#include "UI/FooterComponent.h"

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
                                           public juce::TextEditor::Listener
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

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SoundCollectorAudioProcessor& audioProcessor;

    // Settings
    juce::TextButton settingsButton;
    std::unique_ptr<juce::FileChooser> directoryChooser;

    // Subcomponents
    LevelMeterComponent levelMeterComponent;
    FooterComponent footerComponent;

    // Recording controls
    juce::TextButton recordButton;
    juce::Label recordingStatusLabel;
    juce::Label lastAutoSaveTimestampLabel;

    // Text input for file prefix
    juce::TextEditor filePrefixInput;

    // Timer for updating meters
    std::unique_ptr<MeterTimer> meterTimer;

    // Friend class for timer access
    friend class MeterTimer;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SoundCollectorAudioProcessorEditor)
};