#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
// Version information - Update this for each release
#define PLUGIN_VERSION "v4.1"

//==============================================================================
// Timer class for updating meters
MeterTimer::MeterTimer(SoundCollectorAudioProcessorEditor& editor) : owner(editor) {}

//==============================================================================
SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor(p),
      levelMeterComponent(static_cast<juce::AudioProcessor&>(p))
{
    // Set a minimum size and make the window resizable
    setResizable(false, false); // set resizeable to false for now
    // setResizeLimits(600, 440, 1200, 800);
    setSize(600, 440);

    // Subcomponents
    addAndMakeVisible(levelMeterComponent);

    // Header components
    settingsButton.setButtonText("Set File Location");
    settingsButton.onClick = [this]() {
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

    filePrefixLabel.setText("Filename:", juce::dontSendNotification);
    filePrefixLabel.setJustificationType(juce::Justification::centredLeft);
    filePrefixLabel.attachToComponent(&filePrefixInput, true);
    addAndMakeVisible(filePrefixLabel);

    filePrefixInput.setText(audioProcessor.getSessionFilePrefix(), juce::dontSendNotification);
    filePrefixInput.setFont(juce::Font(14.0f));
    filePrefixInput.onTextChange = [this]() {
        audioProcessor.setSessionFilePrefix(filePrefixInput.getText());
        DBG("Session file prefix updated: " + filePrefixInput.getText());
    };
    addAndMakeVisible(filePrefixInput);

    // Status display components
    recordButton.setButtonText("Quick Save");
    recordButton.onClick = [this]() {
        audioProcessor.saveLastRecording(false);
    };
    addAndMakeVisible(recordButton);

    testToneToggle.setButtonText("Enable Test Tone");
    testToneToggle.onClick = [this]() {
        audioProcessor.setTestToneActive(testToneToggle.getToggleState());
    };
    addAndMakeVisible(testToneToggle);

    recordingStatusLabel.setText("Waiting for audio...", juce::dontSendNotification);
    recordingStatusLabel.setJustificationType(juce::Justification::centredLeft);
    recordingStatusLabel.setFont(juce::Font(14.0f));
    addAndMakeVisible(recordingStatusLabel);

    lastSaveTitleLabel.setText("Last Auto-Save:", juce::dontSendNotification);
    lastSaveTitleLabel.setJustificationType(juce::Justification::centredLeft);
    lastSaveTitleLabel.setFont(juce::Font(12.0f));
    addAndMakeVisible(lastSaveTitleLabel);

    lastSaveLabel.setText("None", juce::dontSendNotification);
    lastSaveLabel.setJustificationType(juce::Justification::centredLeft);
    lastSaveLabel.setFont(juce::Font(12.0f));
    lastSaveLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    addAndMakeVisible(lastSaveLabel);

    // Footer components
    bufferLabel.setJustificationType(juce::Justification::centredLeft);
    bufferLabel.setFont(juce::FontOptions(12.0f));
    bufferLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    bufferLabel.setText("Buffer: 10.0s", juce::dontSendNotification);
    addAndMakeVisible(bufferLabel);

    autoSaveLabel.setJustificationType(juce::Justification::centredLeft);
    autoSaveLabel.setFont(juce::FontOptions(12.0f));
    autoSaveLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    autoSaveLabel.setText("Auto-Save: " + juce::String(audioProcessor.getAutoSaveDuration(), 1) + "s", juce::dontSendNotification);
    addAndMakeVisible(autoSaveLabel);

    versionLabel.setJustificationType(juce::Justification::centredRight);
    versionLabel.setFont(juce::FontOptions(12.0f));
    versionLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    versionLabel.setText(PLUGIN_VERSION, juce::dontSendNotification);
    addAndMakeVisible(versionLabel);

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

    // State restoration callback
    audioProcessor.setStateRestoredCallback([this]() {
        syncUIWithProcessorState();
    });

    // Sync UI with restored state
    syncUIWithProcessorState();

    setSize(600, 440);
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
    const int padding = 8;
    const int headerHeight = 40;
    const int footerHeight = 40;

    // Top: Header row
    auto headerBounds = bounds.removeFromTop(headerHeight);
    auto headerContent = headerBounds.reduced(padding);

    // Settings button on the left
    const int buttonWidth = 120;
    settingsButton.setBounds(headerContent.removeFromLeft(buttonWidth + padding));

    // File prefix section on the right
    const int labelWidth = 60;
    const int inputHeight = 24;
    auto prefixBounds = headerContent.reduced(padding, (headerContent.getHeight() - inputHeight) / 2);
    filePrefixLabel.setBounds(prefixBounds.removeFromLeft(labelWidth));
    filePrefixInput.setBounds(prefixBounds);

    // Bottom: Footer row
    auto footerBounds = bounds.removeFromBottom(footerHeight);
    auto footerContent = footerBounds.reduced(padding);

    // Buffer and auto-save info on the left
    auto leftBounds = footerContent.removeFromLeft(footerContent.getWidth() / 2);
    const int labelHeight = 16;
    bufferLabel.setBounds(leftBounds.removeFromTop(labelHeight).reduced(padding, 0));
    autoSaveLabel.setBounds(leftBounds.removeFromTop(labelHeight).reduced(padding, 0));

    // Version info on the right
    versionLabel.setBounds(footerContent.reduced(padding, 0));

    // Middle: Split into left and right columns
    auto leftColumn = bounds.removeFromLeft(bounds.getWidth() / 2);
    auto rightColumn = bounds;

    // Left column: Status display
    auto statusBounds = leftColumn.reduced(padding);
    const int buttonHeight = 30;
    const int toggleHeight = 24;
    const int statusLabelHeight = 20;

        recordButton.setBounds(statusBounds.removeFromTop(buttonHeight + padding));
    testToneToggle.setBounds(statusBounds.removeFromTop(toggleHeight + padding));
    recordingStatusLabel.setBounds(statusBounds.removeFromTop(statusLabelHeight + padding));

    auto lastSaveBounds = statusBounds.removeFromTop(statusLabelHeight * 2 + padding);
    lastSaveTitleLabel.setBounds(lastSaveBounds.removeFromTop(statusLabelHeight));
    lastSaveLabel.setBounds(lastSaveBounds);

    // Right column: Level meter
    levelMeterComponent.setBounds(rightColumn.reduced(padding));
}

//==============================================================================
void MeterTimer::timerCallback()
{
    // Update status display based on current state
    juce::String status;
    juce::Colour statusColor = juce::Colours::orange;

    if (owner.audioProcessor.isTestToneActive())
    {
        if (owner.audioProcessor.isAutoSaveEnabled())
        {
            if (owner.audioProcessor.isBufferPaused())
            {
                status = "Test Tone Active - Waiting for audio";
                statusColor = juce::Colours::yellow;
            }
            else
            {
                status = "Test Tone Active - Recording";
                statusColor = juce::Colours::cyan;
            }
        }
        else
        {
            if (owner.audioProcessor.isBufferPaused())
            {
                status = "Test Tone Active - Manual Mode - Buffer Paused";
                statusColor = juce::Colours::yellow;
            }
            else
            {
                status = "Test Tone Active - Manual Mode - Recording";
                statusColor = juce::Colours::cyan;
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
                status = "Waiting for audio";
                statusColor = juce::Colours::orange;
            }
            else
            {
                status = "Recording audio";
                statusColor = juce::Colours::green;
            }
        }
        else
        {
            if (owner.audioProcessor.isBufferPaused())
            {
                status = "Quick save - Buffer Paused (no audio)";
                statusColor = juce::Colours::orange;
            }
            else
            {
                status = "Recording audio";
                statusColor = juce::Colours::green;
            }
        }
    }

    owner.recordingStatusLabel.setText(status, juce::dontSendNotification);
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::buttonClicked(juce::Button* button)
{
    // Button handling is now done through component callbacks
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
    // Text editor handling is now done through component callbacks
}

//==============================================================================
// Mouse listener implementation
void SoundCollectorAudioProcessorEditor::mouseDown(const juce::MouseEvent& event)
{
    // Mouse handling is now done through component callbacks
}

//==============================================================================
// Update auto-save timestamp
void SoundCollectorAudioProcessorEditor::updateAutoSaveTimestamp()
{
    auto now = juce::Time::getCurrentTime();
    juce::String timestamp = now.toString(false, true, true, true);
    lastSaveLabel.setText(timestamp, juce::dontSendNotification);
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::syncUIWithProcessorState()
{
    // Sync test tone toggle with processor state
    testToneToggle.setToggleState(audioProcessor.isTestToneActive(), juce::dontSendNotification);

    // Sync file prefix with processor state
    juce::String sessionPrefix = audioProcessor.getSessionFilePrefix();
    if (sessionPrefix.isNotEmpty())
    {
        filePrefixInput.setText(sessionPrefix, juce::dontSendNotification);
    }

    DBG("UI synced with processor state - Test tone: " + juce::String(audioProcessor.isTestToneActive() ? "ON" : "OFF") +
        " Prefix: " + sessionPrefix);
}