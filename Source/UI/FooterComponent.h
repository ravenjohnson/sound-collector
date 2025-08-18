/*
  ==============================================================================

    FooterComponent.h - shows version text and buffer/autosave info.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class FooterComponent : public juce::Component
{
public:
    explicit FooterComponent(juce::AudioProcessor& processor, const juce::String& versionText)
        : audioProcessor(processor)
    {
        versionLabel.setText(versionText, juce::dontSendNotification);
        versionLabel.setJustificationType(juce::Justification::centredRight);
        versionLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
        addAndMakeVisible(versionLabel);
    }

    void paint(juce::Graphics& g) override
    {
        g.setFont(juce::FontOptions(12.0f));
        if (auto* p = dynamic_cast<class SoundCollectorAudioProcessor*>(&audioProcessor))
        {
            juce::String info = "Buffer: 10s | Auto-Save: " + juce::String(p->getAutoSaveDuration(), 1) + "s";
            g.drawFittedText(info, getLocalBounds().withTrimmedRight(70), juce::Justification::centredLeft, 1);
        }
    }

    void resized() override
    {
        versionLabel.setBounds(getWidth() - 60, getHeight() - 20, 50, 20);
    }

private:
    juce::AudioProcessor& audioProcessor;
    juce::Label versionLabel;
};


