#include "SettingsOverlayComponent.h"

SettingsOverlayComponent::SettingsOverlayComponent()
{
  setInterceptsMouseClicks(true, true);
  setWantsKeyboardFocus(true);
  addKeyListener(this);

  bufferCombo = std::make_unique<juce::ComboBox>("BufferCombo");
  bufferCombo->addItem("10 seconds", 10);
  bufferCombo->addItem("20 seconds", 20);
  bufferCombo->addItem("30 seconds", 30);
  bufferCombo->setSelectedId(bufferDuration, juce::dontSendNotification);
  bufferCombo->onChange = [this]
  { comboChanged(); };
  addAndMakeVisible(*bufferCombo);

  autoSaveCombo = std::make_unique<juce::ComboBox>("AutoSaveCombo");
  autoSaveCombo->addItem("10 seconds", 10);
  autoSaveCombo->addItem("20 seconds", 20);
  autoSaveCombo->addItem("30 seconds", 30);
  autoSaveCombo->setSelectedId(autoSaveDuration, juce::dontSendNotification);
  autoSaveCombo->onChange = [this]
  { comboChanged(); };
  addAndMakeVisible(*autoSaveCombo);

  bufferLabel = std::make_unique<juce::Label>("BufferLabel", "Buffer Length (seconds)");
  bufferLabel->setJustificationType(juce::Justification::centredLeft);
  addAndMakeVisible(*bufferLabel);

  autoSaveLabel = std::make_unique<juce::Label>("AutoSaveLabel", "Auto-Save Interval (seconds)");
  autoSaveLabel->setJustificationType(juce::Justification::centredLeft);
  addAndMakeVisible(*autoSaveLabel);

  warningLabel = std::make_unique<juce::Label>("WarningLabel", "");
  warningLabel->setColour(juce::Label::textColourId, juce::Colours::red);
  warningLabel->setJustificationType(juce::Justification::centred);
  addAndMakeVisible(*warningLabel);

  closeButton = std::make_unique<juce::TextButton>("X");
  closeButton->onClick = [this]
  { handleClose(); };
  addAndMakeVisible(*closeButton);
}

SettingsOverlayComponent::~SettingsOverlayComponent() {}

void SettingsOverlayComponent::paint(juce::Graphics &g)
{
  // Dimmed background
  g.setColour(juce::Colours::black.withAlpha(0.5f));
  g.fillAll();

  // Centered panel
  auto bounds = getLocalBounds().reduced(24);
  g.setColour(juce::Colours::darkgrey);
  g.fillRoundedRectangle(bounds.toFloat(), 16.0f);

  // Border
  g.setColour(juce::Colours::grey);
  g.drawRoundedRectangle(bounds.toFloat(), 16.0f, 2.0f);
}

void SettingsOverlayComponent::resized()
{
  auto area = getLocalBounds().reduced(24);
  int y = area.getY() + 32;
  int x = area.getX() + 32;
  int w = area.getWidth() - 64;
  bufferLabel->setBounds(x, y, w, 24);
  bufferCombo->setBounds(x, y + 28, w, 28);
  autoSaveLabel->setBounds(x, y + 64, w, 24);
  autoSaveCombo->setBounds(x, y + 92, w, 28);
  warningLabel->setBounds(x, y + 130, w, 24);
  closeButton->setBounds(area.getRight() - 40, area.getY() + 8, 32, 32);
}

void SettingsOverlayComponent::setBufferDuration(int seconds)
{
  bufferDuration = seconds;
  bufferCombo->setSelectedId(seconds, juce::sendNotification);
  updateWarning();
}

void SettingsOverlayComponent::setAutoSaveDuration(int seconds)
{
  autoSaveDuration = seconds;
  autoSaveCombo->setSelectedId(seconds, juce::sendNotification);
  updateWarning();
}

int SettingsOverlayComponent::getBufferDuration() const { return bufferDuration; }
int SettingsOverlayComponent::getAutoSaveDuration() const { return autoSaveDuration; }

void SettingsOverlayComponent::setValidationCallback(std::function<void(int, int)> cb) { validationCallback = cb; }
void SettingsOverlayComponent::setCloseCallback(std::function<void()> cb) { closeCallback = cb; }

void SettingsOverlayComponent::open()
{
  openState = true;
  setVisible(true);
  grabKeyboardFocus();
}
void SettingsOverlayComponent::close()
{
  openState = false;
  setVisible(false);
  if (closeCallback)
    closeCallback();
}
bool SettingsOverlayComponent::isOpen() const { return openState; }

bool SettingsOverlayComponent::keyPressed(const juce::KeyPress &key, juce::Component *)
{
  if (key == juce::KeyPress::escapeKey)
  {
    close();
    return true;
  }
  return false;
}

void SettingsOverlayComponent::comboChanged()
{
  int newBuffer = bufferCombo->getSelectedId();
  int newAutoSave = autoSaveCombo->getSelectedId();
  bufferDuration = newBuffer;
  autoSaveDuration = newAutoSave;
  updateWarning();
  if (validationCallback)
    validationCallback(newBuffer, newAutoSave);
}

void SettingsOverlayComponent::updateWarning()
{
  if (autoSaveDuration > bufferDuration)
    warningLabel->setText("Auto-Save interval cannot exceed Buffer length. Corrected.", juce::dontSendNotification);
  else
    warningLabel->setText("", juce::dontSendNotification);
}

void SettingsOverlayComponent::handleClose()
{
  close();
}
