/*
  ==============================================================================

    LevelMeterComponent.h - draws graphical input/output level meters with vertical bars.

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
        // Input label
        //inputLabel.setText("Input", juce::dontSendNotification);
        // inputLabel.setColour(juce::Label::textColourId, juce::Colours::white);
        // inputLabel.setJustificationType(juce::Justification::centred);
        // inputLabel.setFont(juce::Font(juce::FontOptions(12.0f)).boldened());
        // addAndMakeVisible(inputLabel);

        // dB value label below meter
        inputDbLabel.setJustificationType(juce::Justification::centred);
        inputDbLabel.setColour(juce::Label::textColourId, juce::Colours::white);
        inputDbLabel.setFont(juce::Font(juce::FontOptions(10.0f)));
        addAndMakeVisible(inputDbLabel);

        // Initialize averaging variables
        averagedInputLevel = 0.0f;
        smoothingFactor = 0.1f; // Adjust for more/less smoothing (0.01 = very smooth, 0.5 = responsive)

        startTimerHz(20); // Update at 20Hz for better CPU efficiency
    }

    ~LevelMeterComponent()
    {
        stopTimer();
    }

    void resized() override
    {
        auto area = getLocalBounds();

        // Calculate meter dimensions for single input meter
        const int meterHeight = area.getHeight() - 60; // Increased space for labels and padding
        const int labelHeight = 20;
        const int padding = 20; // Add padding between meter and dB label

        // Input section (full width)
        inputLabel.setBounds(area.removeFromTop(labelHeight));
        inputMeterBounds = area.removeFromTop(meterHeight);
        
        // Add padding space
        area.removeFromTop(padding);
        
        // Position dB label with more space below the meter
        inputDbLabel.setBounds(area.removeFromTop(labelHeight));
    }

    void paint(juce::Graphics& g) override
    {
        // Draw meter background
        g.setColour(juce::Colours::darkgrey);
        g.fillRect(inputMeterBounds);

        // Draw meter border
        g.setColour(juce::Colours::lightgrey);
        g.drawRect(inputMeterBounds, 1);

        // Draw meter bar
        drawMeterBar(g, inputMeterBounds, inputLevel, "Input");
    }

private:
    void timerCallback() override
    {
        if (auto* p = dynamic_cast<class SoundCollectorAudioProcessor*>(&audioProcessor))
        {
            const float minDisplay = juce::Decibels::decibelsToGain(-60.0f);

            // Get current input level
            float currentInputLevel = p->getInputLevel();

            // Apply exponential smoothing for smoother meter response
            averagedInputLevel = (smoothingFactor * currentInputLevel) + ((1.0f - smoothingFactor) * averagedInputLevel);

            // Update the display level with the smoothed value
            inputLevel = averagedInputLevel;

            // Update dB label with smoothed value
            auto inText = (inputLevel <= minDisplay) ? juce::String("-inf dB") : juce::String(juce::Decibels::gainToDecibels(inputLevel), 1) + " dB";
            inputDbLabel.setText(inText, juce::dontSendNotification);

            // Trigger repaint for meter bar
            repaint();
        }
    }

    void drawMeterBar(juce::Graphics& g, juce::Rectangle<int> bounds, float level, const juce::String& meterName)
    {
        if (level <= 0.0f) return;

        // Convert level to dB
        float dbLevel = juce::Decibels::gainToDecibels(level);

        // Clamp to our display range (-60 to 0 dB)
        dbLevel = juce::jlimit(-60.0f, 0.0f, dbLevel);

        // Convert dB to normalized height (0.0 to 1.0)
        float normalizedHeight = (dbLevel + 60.0f) / 60.0f;

        // Calculate bar height
        int barHeight = static_cast<int>(normalizedHeight * bounds.getHeight());

        // Create bar rectangle (from bottom up)
        juce::Rectangle<int> barBounds = bounds.removeFromBottom(barHeight);

        // Choose color based on level
        juce::Colour barColor;
        if (dbLevel > -6.0f) // Above -6 dB (red zone)
            barColor = juce::Colours::red;
        else if (dbLevel > -12.0f) // -12 to -6 dB (yellow zone)
            barColor = juce::Colours::yellow;
        else // Below -12 dB (green zone)
            barColor = juce::Colours::green;

        // Draw the bar
        g.setColour(barColor);
        g.fillRect(barBounds);

        // Draw bar border
        g.setColour(barColor.darker(0.3f));
        g.drawRect(barBounds, 1);
    }

    juce::AudioProcessor& audioProcessor;

    // Labels
    juce::Label inputLabel;
    juce::Label inputDbLabel;

    // Meter bounds and level
    juce::Rectangle<int> inputMeterBounds;
    float inputLevel = 0.0f;

    // Averaging variables for smooth meter response
    float averagedInputLevel = 0.0f;
    float smoothingFactor = 0.1f;
};


