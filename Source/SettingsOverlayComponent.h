#pragma once
#include <JuceHeader.h>

class SettingsOverlayComponent : public juce::Component,
                                 public juce::KeyListener
{
public:
  SettingsOverlayComponent();
  ~SettingsOverlayComponent() override;

  void paint(juce::Graphics &) override;
  void resized() override;

  // Settings values
  void setBufferDuration(int seconds);
  void setAutoSaveDuration(int seconds);
  int getBufferDuration() const;
  int getAutoSaveDuration() const;

  // Validation
  void setValidationCallback(std::function<void(int, int)> cb);
  void setCloseCallback(std::function<void()> cb);

  // UI state
  void open();
  void close();
  bool isOpen() const;

  // JUCE key listener
  bool keyPressed(const juce::KeyPress &, juce::Component *) override;

private:
  int bufferDuration = 10;
  int autoSaveDuration = 10;
  bool openState = false;

  std::function<void(int, int)> validationCallback;
  std::function<void()> closeCallback;

  // UI controls
  std::unique_ptr<juce::ComboBox> bufferCombo;
  std::unique_ptr<juce::ComboBox> autoSaveCombo;
  std::unique_ptr<juce::TextButton> closeButton;
  std::unique_ptr<juce::Label> bufferLabel;
  std::unique_ptr<juce::Label> autoSaveLabel;
  std::unique_ptr<juce::Label> warningLabel;

  void updateWarning();
  void comboChanged();
  void handleClose();
  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SettingsOverlayComponent)
};
