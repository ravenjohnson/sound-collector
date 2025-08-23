#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
// Version information - Update this for each release
#define PLUGIN_VERSION "v5.1"

//==============================================================================
// Timer class for updating meters
MeterTimer::MeterTimer(SoundCollectorAudioProcessorEditor& editor) : owner(editor) {}

//==============================================================================
SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor(p),
      levelMeterComponent(static_cast<juce::AudioProcessor&>(p))
{
    // Debug: Constructor called
    DBG("PluginEditor constructor called");
    // Set a minimum size and make the window resizable
    setResizable(false, false); // set resizeable to false for now
    // setResizeLimits(480, 400, 1200, 800);
    setSize(480, 400);

    // Subcomponents
    addAndMakeVisible(levelMeterComponent);

    // Use a regular TextButton instead of custom class to avoid initialization issues

    // Header components
    settingsButton.setButtonText("Save Location");
    settingsButton.setColour(juce::TextButton::textColourOffId, juce::Colours::white);
    settingsButton.setColour(juce::TextButton::textColourOnId, juce::Colours::white);

    // Create a custom LookAndFeel for Save Location button with background images
    class SaveLocationButtonLookAndFeel : public juce::LookAndFeel_V4
    {
    public:
        SaveLocationButtonLookAndFeel(juce::Image& normalImage, juce::Image& hoverImage)
            : normalButtonImage(normalImage), hoverButtonImage(hoverImage) {}

        void drawButtonBackground(juce::Graphics& g, juce::Button& button,
                                  const juce::Colour& backgroundColour,
                                  bool isMouseOverButton, bool isButtonDown) override
        {
            // Draw the appropriate background image based on mouse state
            juce::Image& imageToDraw = isMouseOverButton ? hoverButtonImage : normalButtonImage;

            if (imageToDraw.isValid())
            {
                auto bounds = button.getLocalBounds().toFloat();
                g.drawImage(imageToDraw, bounds, juce::RectanglePlacement::stretchToFit);
            }
        }

        void drawButtonText(juce::Graphics& g, juce::TextButton& button,
                            bool isMouseOverButton, bool isButtonDown) override
        {
            // Draw only the text, no background or border
            g.setFont(juce::Font(juce::FontOptions().withHeight(14.0f)));
            g.setColour(button.findColour(isButtonDown ? juce::TextButton::textColourOnId
                                                       : juce::TextButton::textColourOffId));

            // Position text 36px from left edge, centered vertically
            auto buttonBounds = button.getLocalBounds();
            juce::Rectangle<int> textBounds(36, 0, buttonBounds.getWidth() - 36, buttonBounds.getHeight());
            g.drawFittedText(button.getButtonText(), textBounds,
                           juce::Justification::centredLeft, 1);
        }

    private:
        juce::Image& normalButtonImage;
        juce::Image& hoverButtonImage;
    };

    // Custom TextEditor LookAndFeel for transparent styling and text positioning
    class FlatTextEditorLookAndFeel : public juce::LookAndFeel_V4
    {
    public:
        void fillTextEditorBackground(juce::Graphics& g, int width, int height, juce::TextEditor& textEditor) override
        {
            // Don't draw any background
        }

        void drawTextEditorOutline(juce::Graphics& g, int width, int height, juce::TextEditor& textEditor) override
        {
            // No border - completely transparent outline
        }

        int getTextEditorHorizontalMargin(juce::TextEditor& textEditor)
        {
            return 12; // 12px margin from left edge
        }

        int getTextEditorVerticalMargin(juce::TextEditor& textEditor)
        {
            return 2; // Default margin since setJustification is used for centering
        }
    };

    // Apply the custom look and feel
    static FlatTextEditorLookAndFeel flatTextEditorLookAndFeel;

    // Configure the filename input
    filePrefixInput.setLookAndFeel(&flatTextEditorLookAndFeel);

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

    // Configure filename input with placeholder behavior
    filePrefixInput.setFont(juce::Font(juce::FontOptions().withHeight(14.0f)));
    filePrefixInput.setJustification(juce::Justification::centredLeft); // Center text vertically, left-align horizontally
    filePrefixInput.setIndents(12, 0); // 12px left padding, 0px right padding

    // Make border and background transparent, set white text
    filePrefixInput.setColour(juce::TextEditor::backgroundColourId, juce::Colours::transparentBlack);
    filePrefixInput.setColour(juce::TextEditor::outlineColourId, juce::Colours::transparentBlack);
    filePrefixInput.setColour(juce::TextEditor::focusedOutlineColourId, juce::Colours::transparentBlack);
    filePrefixInput.setColour(juce::TextEditor::textColourId, juce::Colours::white);
    filePrefixInput.setColour(juce::TextEditor::highlightedTextColourId, juce::Colours::white);
    filePrefixInput.setColour(juce::TextEditor::highlightColourId, juce::Colours::transparentBlack);

    // Set placeholder text
    filePrefixInput.setTextToShowWhenEmpty("Filename", juce::Colours::grey);

    filePrefixInput.onTextChange = [this]() {
        audioProcessor.setSessionFilePrefix(filePrefixInput.getText());
        DBG("Session file prefix updated: " + filePrefixInput.getText());
    };

    // Initialize with existing session prefix
    juce::String existingPrefix = audioProcessor.getSessionFilePrefix();
    if (existingPrefix.isNotEmpty())
    {
        filePrefixInput.setText(existingPrefix, juce::dontSendNotification);
    }

    addAndMakeVisible(filePrefixInput);

    // Status display components
    recordButton.setButtonText("Quick Save");
    recordButton.onClick = [this]() {
        audioProcessor.saveLastRecording(false);
    };
    // Configure Quick save button with background images
    class QuickSaveButtonLookAndFeel : public juce::LookAndFeel_V4
    {
    public:
        QuickSaveButtonLookAndFeel(juce::Image& normalImage, juce::Image& hoverImage)
            : normalButtonImage(normalImage), hoverButtonImage(hoverImage) {}

        void drawButtonBackground(juce::Graphics& g, juce::Button& button, const juce::Colour& backgroundColour,
                                bool isMouseOverButton, bool isButtonDown) override
        {
            // Draw the appropriate background image based on mouse state
            juce::Image& imageToDraw = isMouseOverButton ? hoverButtonImage : normalButtonImage;

            if (imageToDraw.isValid())
            {
                auto bounds = button.getLocalBounds().toFloat();
                g.drawImage(imageToDraw, bounds, juce::RectanglePlacement::stretchToFit);
            }
        }

        void drawButtonText(juce::Graphics& g, juce::TextButton& button,
                           bool isMouseOverButton, bool isButtonDown) override
        {
            g.setFont(juce::Font(juce::FontOptions().withHeight(14.0f)));
            g.setColour(button.findColour(button.getToggleState() ? juce::TextButton::textColourOnId
                                                                  : juce::TextButton::textColourOffId)
                                   .withMultipliedAlpha(button.isEnabled() ? 1.0f : 0.5f));

            const int yIndent = juce::jmin(4, button.proportionOfHeight(0.3f));
            const int cornerSize = juce::jmin(button.getHeight(), button.getWidth()) / 2;

            const int fontHeight = juce::roundToInt(14.0f * 0.6f);
            const int leftIndent = 38; // 38px from left as requested
            const int rightIndent = juce::jmin(fontHeight, 2 + cornerSize / (button.isConnectedOnRight() ? 4 : 2));
            const int textWidth = button.getWidth() - leftIndent - rightIndent;

            if (textWidth > 0)
                g.drawFittedText(button.getButtonText(),
                                leftIndent, yIndent, textWidth, button.getHeight() - yIndent * 2,
                                juce::Justification::centredLeft, 2);
        }

    private:
        juce::Image& normalButtonImage;
        juce::Image& hoverButtonImage;
    };

    addAndMakeVisible(recordButton);

    testToneToggle.setButtonText("Test tone");
    testToneToggle.onClick = [this]() {
        audioProcessor.setTestToneActive(testToneToggle.getToggleState());
    };
    addAndMakeVisible(testToneToggle);

    recordingStatusLabel.setText("Waiting for audio...", juce::dontSendNotification);
    recordingStatusLabel.setJustificationType(juce::Justification::centredLeft);
    recordingStatusLabel.setFont(juce::Font(juce::FontOptions().withHeight(14.0f)));
    addAndMakeVisible(recordingStatusLabel);

    lastSaveTitleLabel.setText("Last saved:", juce::dontSendNotification);
    lastSaveTitleLabel.setJustificationType(juce::Justification::centredLeft);
    lastSaveTitleLabel.setFont(juce::Font(juce::FontOptions().withHeight(14.0f)));
    lastSaveTitleLabel.setColour(juce::Label::textColourId, juce::Colours::white);
    addAndMakeVisible(lastSaveTitleLabel);

    lastSaveLabel.setText("None", juce::dontSendNotification);
    lastSaveLabel.setJustificationType(juce::Justification::centredLeft);
    lastSaveLabel.setFont(juce::Font(juce::FontOptions().withHeight(14.0f)));
    lastSaveLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    addAndMakeVisible(lastSaveLabel);

    // Footer components
    bufferLabel.setJustificationType(juce::Justification::centredLeft);
    bufferLabel.setFont(juce::FontOptions(14.0f));
    bufferLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    bufferLabel.setText("Buffer: 10.0s", juce::dontSendNotification);
    addAndMakeVisible(bufferLabel);

    autoSaveLabel.setJustificationType(juce::Justification::centredLeft);
    autoSaveLabel.setFont(juce::FontOptions(14.0f));
    autoSaveLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    autoSaveLabel.setText("Auto-Save: " + juce::String(audioProcessor.getAutoSaveDuration(), 1) + "s", juce::dontSendNotification);
    addAndMakeVisible(autoSaveLabel);

    versionLabel.setJustificationType(juce::Justification::centredRight);
    versionLabel.setFont(juce::FontOptions(14.0f));
    versionLabel.setColour(juce::Label::textColourId, juce::Colours::grey);
    versionLabel.setText(PLUGIN_VERSION, juce::dontSendNotification);
    addAndMakeVisible(versionLabel);

    // Instruction text is drawn directly in paint() method - no component setup needed

    // Load background image
    loadBackgroundImage();

    // Load button background images
    loadButtonImages();

    // Apply button LookAndFeel with loaded images
    static SaveLocationButtonLookAndFeel saveLocationLookAndFeel(saveLocationButtonImage, saveLocationButtonHoverImage);
    static QuickSaveButtonLookAndFeel quickSaveLookAndFeel(quickSaveButtonImage, quickSaveButtonHoverImage);
    settingsButton.setLookAndFeel(&saveLocationLookAndFeel);
    recordButton.setLookAndFeel(&quickSaveLookAndFeel);

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

    setSize(480, 400);
}

SoundCollectorAudioProcessorEditor::~SoundCollectorAudioProcessorEditor()
{
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::loadBackgroundImage()
{
    // Try to load background image from various locations
    juce::File backgroundFile;

    // Try multiple paths for the background image
    juce::Array<juce::File> possiblePaths;

    // 1. App bundle Resources directory
    juce::File bundleFile = juce::File::getSpecialLocation(juce::File::currentExecutableFile);
    if (bundleFile.getParentDirectory().getFileName() == "MacOS")
    {
        possiblePaths.add(bundleFile.getParentDirectory().getParentDirectory()
                         .getChildFile("Resources")
                         .getChildFile("background.png"));
    }

    // 2. Executable directory
    possiblePaths.add(bundleFile.getChildFile("background.png"));

    // 3. Development path (relative to project root)
    juce::File projectRoot = bundleFile.getParentDirectory()  // Contents/MacOS/
                               .getParentDirectory()        // Contents/
                               .getParentDirectory()        // SoundCollector.app/
                               .getParentDirectory()        // Debug/
                               .getParentDirectory()        // build/
                               .getParentDirectory()        // MacOSX/
                               .getParentDirectory()        // Builds/
                               .getParentDirectory();       // project_root/
    possiblePaths.add(projectRoot.getChildFile("Source").getChildFile("Assets").getChildFile("background.png"));

    // Try each path
    for (const auto& path : possiblePaths)
    {
        if (path.existsAsFile())
        {
            backgroundFile = path;
            break;
        }
    }

    if (backgroundFile.existsAsFile())
    {
        juce::FileInputStream inputStream(backgroundFile);
        if (inputStream.openedOk())
        {
            // Try loading with ImageFileFormat
            backgroundImage = juce::ImageFileFormat::loadFrom(inputStream);
            if (!backgroundImage.isValid())
            {
                // Try alternative loading method
                backgroundImage = juce::ImageCache::getFromFile(backgroundFile);
            }
        }
    }
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::loadButtonImages()
{
    // Try to load button images from various locations
    juce::File bundleFile = juce::File::getSpecialLocation(juce::File::currentExecutableFile);

    // Try multiple paths for the button images
    juce::Array<juce::File> possiblePaths;

    // 1. App bundle Resources directory
    if (bundleFile.getParentDirectory().getFileName() == "MacOS")
    {
        possiblePaths.add(bundleFile.getParentDirectory().getParentDirectory()
                         .getChildFile("Resources"));
    }

    // 2. Executable directory
    possiblePaths.add(bundleFile.getParentDirectory());

    // 3. Development path (relative to project root)
    juce::File projectRoot = bundleFile.getParentDirectory()  // Contents/MacOS/
                               .getParentDirectory()        // Contents/
                               .getParentDirectory()        // SoundCollector.app/
                               .getParentDirectory()        // Debug/
                               .getParentDirectory()        // build/
                               .getParentDirectory()        // MacOSX/
                               .getParentDirectory()        // Builds/
                               .getParentDirectory();       // project_root/
    possiblePaths.add(projectRoot.getChildFile("Source").getChildFile("Assets"));

    // Load Save Location button images
    for (const auto& path : possiblePaths)
    {
        juce::File normalFile = path.getChildFile("button-location.png");
        juce::File hoverFile = path.getChildFile("button-location-hover.png");

        if (normalFile.existsAsFile() && hoverFile.existsAsFile())
        {
            saveLocationButtonImage = juce::ImageCache::getFromFile(normalFile);
            saveLocationButtonHoverImage = juce::ImageCache::getFromFile(hoverFile);
            break;
        }
    }

    // Load Quick Save button images
    for (const auto& path : possiblePaths)
    {
        juce::File normalFile = path.getChildFile("button-save.png");
        juce::File hoverFile = path.getChildFile("button-save-hover.png");

        if (normalFile.existsAsFile() && hoverFile.existsAsFile())
        {
            quickSaveButtonImage = juce::ImageCache::getFromFile(normalFile);
            quickSaveButtonHoverImage = juce::ImageCache::getFromFile(hoverFile);
            break;
        }
    }
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::timerCallback()
{
    // Timer callback implementation for juce::Timer inheritance
    // The actual timer logic is handled by MeterTimer class
}

//==============================================================================
void SoundCollectorAudioProcessorEditor::paint(juce::Graphics& g)
{
    // Draw background image if available, otherwise use solid color
    if (backgroundImage.isValid())
    {
        // Scale the image to fit the plugin window size while preserving aspect ratio
        float imageAspect = (float)backgroundImage.getWidth() / (float)backgroundImage.getHeight();
        float windowAspect = (float)getWidth() / (float)getHeight();

        int drawWidth, drawHeight, offsetX = 0, offsetY = 0;

        if (imageAspect > windowAspect)
        {
            // Image is wider relative to height - fit to width
            drawWidth = getWidth();
            drawHeight = (int)(getWidth() / imageAspect);
            offsetY = (getHeight() - drawHeight) / 2;
        }
        else
        {
            // Image is taller relative to width - fit to height
            drawHeight = getHeight();
            drawWidth = (int)(getHeight() * imageAspect);
            offsetX = (getWidth() - drawWidth) / 2;
        }

        g.drawImage(backgroundImage, offsetX, offsetY, drawWidth, drawHeight, 0, 0, backgroundImage.getWidth(), backgroundImage.getHeight());
    }
    else
    {
        // Fallback to default color background
        g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
    }

    // g.setColour(juce::Colours::white);
    // g.setFont(juce::FontOptions(14.0f));
    // g.drawFittedText("Sound Collector", getLocalBounds().removeFromTop(30), juce::Justification::left, 1);

    // Draw instruction text with explicit line wrapping
    g.setColour(juce::Colours::white.withAlpha(0.5f));
    g.setFont(juce::FontOptions(14.0f));
    juce::Rectangle<int> instructionRect(32, 76, 300, 50);
    g.drawFittedText("Choose a save folder and filename - Sound Collector keeps the last 10s of your audio, auto-saved.",
                     instructionRect, juce::Justification::topLeft, 3); // 3 lines maximum for wrapping

    g.setFont(juce::FontOptions(14.0f));
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
    bounds.removeFromTop(headerHeight);

    // Settings button positioned at specific coordinates
    settingsButton.setBounds(32, 133, 126, 32);

    // Filename input positioned at specific coordinates
    filePrefixInput.setBounds(166, 133, 168, 32);

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
    auto leftColumn = bounds.removeFromLeft(bounds.getWidth() * 6 / 8);
    auto rightColumn = bounds;

    // Left column: Status display
    auto statusBounds = leftColumn.reduced(padding);


        // Quick save button positioned at specific coordinates with exact size
    recordButton.setBounds(16, 288, 112, 32);
    // Test tone button positioned to the right of Quick Save button
    testToneToggle.setBounds(133, 288, 100, 32);
    recordingStatusLabel.setBounds(32, 212, 200, 20);

    // Instruction text is drawn directly in paint() method - no bounds needed

    // Calculate dynamic width for "Last saved:" label using font metrics
    int titleWidth = lastSaveTitleLabel.getFont().getStringWidth(lastSaveTitleLabel.getText()) + 8; // 8px padding
    lastSaveTitleLabel.setBounds(32, 232, titleWidth, 20); // Positioned directly under recordingStatusLabel

    // Position the value label right after the title label with dynamic width
    int valueWidth = lastSaveLabel.getFont().getStringWidth(lastSaveLabel.getText()) + 8; // 8px padding
    lastSaveLabel.setBounds(32 + titleWidth + 6, 232, valueWidth, 20); // 6px gap between labels

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