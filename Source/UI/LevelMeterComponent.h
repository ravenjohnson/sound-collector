/*
  ==============================================================================

    LevelMeterComponent.h - draws simple input/output level meters with labels.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class LevelMeterComponent : public juce::Component,
                            private juce::Timer
{
public:
    explicit LevelMeterComponent(juce::AudioProcessor& processor)
        : audioProcessor(processor)
    {
        inputLabel.setText("Input Level:", juce::dontSendNotification);
        inputLabel.setJustificationType(juce::Justification::centred);
        addAndMakeVisible(inputLabel);

        outputLabel.setText("Output Level:", juce::dontSendNotification);
        outputLabel.setJustificationType(juce::Justification::centred);
        addAndMakeVisible(outputLabel);

        addAndMakeVisible(inputValue);
        addAndMakeVisible(outputValue);

        startTimerHz(30);
    }

    void resized() override
    {
        auto area = getLocalBounds();
        inputLabel.setBounds(area.removeFromTop(20));
        inputValue.setBounds(area.removeFromTop(20));
        outputLabel.setBounds(area.removeFromTop(20));
        outputValue.setBounds(area.removeFromTop(20));
    }

private:
    void timerCallback() override
    {
        if (auto* p = dynamic_cast<class SoundCollectorAudioProcessor*>(&audioProcessor))
        {
            const float minDisplay = juce::Decibels::decibelsToGain(-60.0f);
            auto in = p->getInputLevel();
            auto out = p->getOutputLevel();
            auto inText = (in <= minDisplay) ? juce::String("-∞ dB") : juce::String(juce::Decibels::gainToDecibels(in), 2) + " dB";
            auto outText = (out <= minDisplay) ? juce::String("-∞ dB") : juce::String(juce::Decibels::gainToDecibels(out), 2) + " dB";
            inputValue.setText(inText, juce::dontSendNotification);
            outputValue.setText(outText, juce::dontSendNotification);
        }
    }

    juce::AudioProcessor& audioProcessor;
    juce::Label inputLabel, outputLabel, inputValue, outputValue;
};


