#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
// Version information - Update this for each release
#define PLUGIN_VERSION "v3.3"

//==============================================================================
// Timer class for updating meters
MeterTimer::MeterTimer(SoundCollectorAudioProcessorEditor& editor) : owner(editor) {}

//==============================================================================
SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor(p),
      levelMeterComponent(static_cast<juce::AudioProcessor&>(p)),
      footerComponent(static_cast<juce::AudioProcessor&>(p), PLUGIN_VERSION)
{
    // Set a minimum size and make the window resizable
    setResizable(true, true);
    setResizeLimits(600, 440, 1200, 800);
    setSize(600, 440);

    // Subcomponents
    addAndMakeVisible(levelMeterComponent);
    addAndMakeVisible(footerComponent);

    // Settings button
    settingsButton.setButtonText("Settings");
    settingsButton.onClick = [this]
    {
        juce::File initial = audioProcessor.getUserSaveDirectory();
        if (initial.getFullPathName().isEmpty())
            initial = juce::File::getSpecialLocation(juce::File::userDesktopDirectory);

        directoryChooser = std::make_unique<juce::FileChooser>("Select Default Save Folder", initial);
        directoryChooser->launchAsync(juce::FileBrowserComponent::openMode | juce::FileBrowserComponent::canSelectDirectories,
            [this](const juce::FileChooser& fc)
            {
                auto dir = fc.getResult();
                if (dir != juce::File())
                    audioProcessor.setUserSaveDirectoryAndPersist(dir);
                directoryChooser.reset();
            });
    };
    addAndMakeVisible(settingsButton);

    // Configure recording controls
    recordButton.setButtonText("Manual Save (10s)");
    recordButton.addListener(this);
    addAndMakeVisible(recordButton);

    recordingStatusLabel.setText("Auto-Save Active - Buffer Paused (no audio)", juce::dontSendNotification);
    recordingStatusLabel.setJustificationType(juce::Justification::centred);
    recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::green);
    addAndMakeVisible(recordingStatusLabel);

    // Test tone toggle
    testToneToggle.setButtonText("Enable Test Tone");
    testToneToggle.addListener(this);
    addAndMakeVisible(testToneToggle);

    // Auto-save timestamp label
    lastAutoSaveTimestampLabel.setText("No auto-saves yet", juce::dontSendNotification);
    lastAutoSaveTimestampLabel.setJustificationType(juce::Justification::centred);
    lastAutoSaveTimestampLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    lastAutoSaveTimestampLabel.setFont(juce::Font(juce::FontOptions(12.0f))); // Smaller font
    addAndMakeVisible(lastAutoSaveTimestampLabel);

    // [NEW] File prefix text input
    filePrefixInput.setText("Idea", juce::dontSendNotification); // Default text
    filePrefixInput.setJustification(juce::Justification::centred);
    filePrefixInput.setTextToShowWhenEmpty("Enter prefix", juce::Colours::grey);
    filePrefixInput.addListener(this); // Add listener for text editor events
    addAndMakeVisible(filePrefixInput); // Add to UI

    // Meter timer
    meterTimer = std::make_unique<MeterTimer>(*this);
    meterTimer->startTimerHz(30);

    // Save callback
    audioProcessor.setSaveCallback([this](const juce::String& saveType) {
        showSaveTimestamp(saveType);
        if (saveType == "Auto Save")
        {
            updateAutoSaveTimestamp();
        }
    });

    // File prefix callback for manual saves
    audioProcessor.setFilePrefixCallback([this]() {
        return getFilePrefix();
    });

    setSize(400, 300);
}

SoundCollectorAudioProcessorEditor::~SoundCollectorAudioProcessorEditor()
{
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::paint(juce::Graphics& g)
{
    g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

    g.setColour(juce::Colours::white);
    g.setFont(juce::FontOptions(15.0f));
    g.drawFittedText("Sound Collector - Continuous Recorder", getLocalBounds().removeFromTop(30), juce::Justification::centred, 1);

    g.setFont(juce::FontOptions(12.0f));
    juce::String infoText = "Buffer: 10s | Auto-Save: " +
                            juce::String(audioProcessor.getAutoSaveDuration(), 1) + "s";
    g.drawFittedText(infoText, getLocalBounds().removeFromBottom(30), juce::Justification::centred, 1);
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::resized()
{
    auto bounds = getLocalBounds();



    // Settings button
    settingsButton.setBounds(20, 20, 100, 25);

    // [NEW] File prefix input position (next to settings button)
    filePrefixInput.setBounds(130, 20, 120, 25);

    // Center controls
    auto centerArea = bounds.removeFromLeft(bounds.getWidth() / 2);
    recordButton.setBounds(centerArea.getCentreX() - 50, centerArea.getCentreY() - 15, 100, 30);
    testToneToggle.setBounds(centerArea.getCentreX() - 60, centerArea.getCentreY() + 15, 120, 25);
    recordingStatusLabel.setBounds(centerArea.getCentreX() - 75, centerArea.getCentreY() + 45, 150, 20);
    lastAutoSaveTimestampLabel.setBounds(centerArea.getCentreX() - 100, centerArea.getCentreY() + 70, 200, 15);

    // Level meter
    auto meterArea = bounds.removeFromRight(150);
    levelMeterComponent.setBounds(meterArea);

    // Footer
    footerComponent.setBounds(0, getHeight() - 30, getWidth(), 30);
}

//==============================================================================
void MeterTimer::timerCallback()
{
    // Check if test tone is active first
    if (owner.audioProcessor.isTestToneActive())
    {
        if (owner.audioProcessor.isAutoSaveEnabled())
        {
            if (owner.audioProcessor.isBufferPaused())
            {
                owner.recordingStatusLabel.setText("Test Tone Active - Auto-Save - Buffer Paused", juce::dontSendNotification);
                owner.recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::yellow);
            }
            else
            {
                owner.recordingStatusLabel.setText("Test Tone Active - Auto-Save - Recording", juce::dontSendNotification);
                owner.recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::cyan);
            }
        }
        else
        {
            if (owner.audioProcessor.isBufferPaused())
            {
                owner.recordingStatusLabel.setText("Test Tone Active - Manual Mode - Buffer Paused", juce::dontSendNotification);
                owner.recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::yellow);
            }
            else
            {
                owner.recordingStatusLabel.setText("Test Tone Active - Manual Mode - Recording", juce::dontSendNotification);
                owner.recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::cyan);
            }
        }
    }
    else
    {
        // Normal status display (no test tone)
        if (owner.audioProcessor.isAutoSaveEnabled())
        {
            if (owner.audioProcessor.isBufferPaused())
            {
                owner.recordingStatusLabel.setText("Auto-Save Active - Buffer Paused (no audio)", juce::dontSendNotification);
                owner.recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::orange);
            }
            else
            {
                owner.recordingStatusLabel.setText("Auto-Save Active - Recording audio snippets", juce::dontSendNotification);
                owner.recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::green);
            }
        }
        else
        {
            if (owner.audioProcessor.isBufferPaused())
            {
                owner.recordingStatusLabel.setText("Manual Mode - Buffer Paused (no audio)", juce::dontSendNotification);
                owner.recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::orange);
            }
            else
            {
                owner.recordingStatusLabel.setText("Manual Mode - Recording audio snippets", juce::dontSendNotification);
                owner.recordingStatusLabel.setColour(juce::Label::textColourId, juce::Colours::green);
            }
        }
    }
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::buttonClicked(juce::Button* button)
{
    if (button == &recordButton)
    {
        audioProcessor.saveLastRecording();
    }
    else if (button == &testToneToggle)
    {
        audioProcessor.setTestToneActive(testToneToggle.getToggleState());
    }
}

void SoundCollectorAudioProcessorEditor::showSaveTimestamp(const juce::String& saveType)
{
    auto now = juce::Time::getCurrentTime();
    juce::String timestamp = now.toString(false, true, true, true);
    recordingStatusLabel.setText(saveType + " - " + timestamp, juce::dontSendNotification);
}

//==============================================================================
// Text editor listener implementations
void SoundCollectorAudioProcessorEditor::textEditorTextChanged(juce::TextEditor& editor)
{
    // Handle text changes if needed
    juce::ignoreUnused(editor);
}

//==============================================================================
// Mouse listener implementation
void SoundCollectorAudioProcessorEditor::mouseDown(const juce::MouseEvent& event)
{
    // Check if the click was on the file prefix input
    if (event.eventComponent == &filePrefixInput)
    {
        // Only clear if it still has the default text
        if (filePrefixInput.getText() == "Idea")
        {
            filePrefixInput.clear();
        }
    }
}

//==============================================================================
// Update auto-save timestamp
void SoundCollectorAudioProcessorEditor::updateAutoSaveTimestamp()
{
    auto now = juce::Time::getCurrentTime();
    juce::String timestamp = "Last auto-save: " + now.toString(false, true, true, true);
    lastAutoSaveTimestampLabel.setText(timestamp, juce::dontSendNotification);
    lastAutoSaveTimestampLabel.setColour(juce::Label::textColourId, juce::Colours::lightblue);
}