/*
  ==============================================================================

    ThresholdSliderComponent.h - simple header-only UI component wrapping a
    vertical threshold slider with a caption, updating the processor threshold.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class ThresholdSliderComponent : public juce::Component,
                                 private juce::Slider::Listener
{
public:
    explicit ThresholdSliderComponent(juce::AudioProcessor& processor)
        : audioProcessor(processor)
    {
        thresholdSlider.setSliderStyle(juce::Slider::LinearVertical);
        thresholdSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 100, 20);
        thresholdSlider.setRange(-60.0, 0.0, 0.1);
        thresholdSlider.setValue(-60.0);
        thresholdSlider.addListener(this);
        addAndMakeVisible(thresholdSlider);

        caption.setText("Threshold", juce::dontSendNotification);
        caption.setJustificationType(juce::Justification::centred);
        addAndMakeVisible(caption);

        // Ensure processor also has default value if supported
        if (auto* p = dynamic_cast<class SoundCollectorAudioProcessor*>(&audioProcessor))
            p->setThreshold(-60.0f);
    }

    void resized() override
    {
        auto area = getLocalBounds();
        auto captionArea = area.removeFromBottom(24);
        thresholdSlider.setBounds(area);
        caption.setBounds(captionArea);
    }

    void setValue(double valueDb)
    {
        thresholdSlider.setValue(valueDb, juce::dontSendNotification);
        if (auto* p = dynamic_cast<class SoundCollectorAudioProcessor*>(&audioProcessor))
            p->setThreshold(static_cast<float>(valueDb));
    }

    double getValue() const { return thresholdSlider.getValue(); }

private:
    void sliderValueChanged(juce::Slider* s) override
    {
        if (s == &thresholdSlider)
        {
            if (auto* p = dynamic_cast<class SoundCollectorAudioProcessor*>(&audioProcessor))
                p->setThreshold(static_cast<float>(thresholdSlider.getValue()));
        }
    }

    juce::AudioProcessor& audioProcessor;
    juce::Slider thresholdSlider;
    juce::Label caption;
};


