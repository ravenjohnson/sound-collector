#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor(p)
{
    DBG("PluginEditor constructor called - MINIMAL VERSION");

    // Create one simple button to test
    settingsButton.setButtonText("Save Location");
    settingsButton.onClick = [this]() {
        DBG("Save Location button clicked");
    };
    addAndMakeVisible(settingsButton);

    // Set size immediately - no custom components to interfere
    setSize(480, 400);

    // Position the single component
    settingsButton.setBounds(50, 50, 100, 30);
}

SoundCollectorAudioProcessorEditor::~SoundCollectorAudioProcessorEditor()
{
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);
    g.setColour(juce::Colours::white);
    g.setFont(juce::FontOptions(15.0f));
    g.drawFittedText("Sound Collector - Minimal Test", getLocalBounds(), juce::Justification::centredTop, 1);
}

void SoundCollectorAudioProcessorEditor::resized()
{
    // Simple positioning
    settingsButton.setBounds(50, 50, 100, 30);
}
