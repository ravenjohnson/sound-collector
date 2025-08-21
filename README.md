# SoundCollector

A modern JUCE-based audio plugin and standalone application for intelligent sound collection and processing. Features a clean, professional interface with real-time monitoring and automatic audio capture capabilities.

## Features

### **Core Audio Processing**
- **Smart Recording**: Threshold-triggered recording that automatically pauses during silence and resumes when audio returns
- **Circular Buffer**: Maintains the last 10 seconds of recorded audio in memory for instant capture
- **Automatic Saving**: Saves audio every 10 seconds when meaningful content is detected
- **Manual Quick Save**: Capture the current 10-second buffer contents on demand
- **Test Tone Generator**: Built-in 440Hz sine wave for testing and calibration

### **User Interface**
- **Modern Grid Layout**: Clean, organized 600x440 interface with logical component grouping
- **Real-time Level Metering**: Visual input level monitoring with dB readouts (-60dB to 0dB range)
- **Status Display**: Color-coded recording status with detailed state information
- **Session Persistence**: Custom file locations and prefixes are saved per DAW session

### **File Management**
- **Flexible Save Locations**: Choose custom directories or use intelligent defaults
- **Custom File Naming**: Set custom filename prefixes for organized project workflows
- **Timestamped Files**: Automatic WAV file naming with date/time stamps
- **High-Quality Export**: 24-bit WAV files maintaining original sample rate and channel configuration

### **Platform Support**
- **Audio Unit (AU)**: Native macOS plugin format
- **Standalone Application**: Direct audio processing without a DAW
- **VST3 Support**: Cross-platform plugin compatibility
- **Cross-Platform**: Built with JUCE framework for maximum compatibility

## Prerequisites

- **macOS**: 11.0 or later
- **Xcode**: Latest version recommended
- **JUCE Framework**: Included in the project

## Installation

### Option 1: Build from Source (Recommended)

1. **Clone the repository**:
   ```bash
   git clone <repository-url>
   cd sound-collector
   ```

2. **Build the project**:
   ```bash
   # Build all targets
   xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -target "SoundCollector - All" -configuration Release
   
   # Or build specific targets:
   # Standalone app only
   xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -target "SoundCollector - Standalone Plugin" -configuration Release
   
   # Audio Unit plugin only
   xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -target "SoundCollector - AU" -configuration Release
   ```

3. **Install the Audio Unit plugin** (optional):
   ```bash
   # Copy AU plugin to system location
   sudo cp -R "Builds/MacOSX/build/Release/SoundCollector.component" "/Library/Audio/Plug-Ins/Components/"
   ```

### Option 2: Quick Build Script

Use the included build script for faster development:

```bash
# Make script executable (first time only)
chmod +x build_and_run.sh

# Build and run standalone app
./build_and_run.sh
```

## Usage

### Interface Overview

SoundCollector features a clean, grid-based layout organized into logical sections:

```
┌─────────────────────────────────────────────────────────┐
│ [Set File Location] [Filename: _______________]         │ ← Header
├─────────────────────────────────────────────────────────┤
│ [Quick Save]                    │ [Input Level Meter]   │
│ [☐ Enable Test Tone]           │ [Graphical Bar]       │ ← Main
│ [Status: Recording audio]       │ [-12.3 dB]            │
│ [Last Auto-Save: timestamp]     │                       │
├─────────────────────────────────────────────────────────┤
│ Buffer: 10.0s | Auto-Save: 10.0s              v4.1     │ ← Footer
└─────────────────────────────────────────────────────────┘
```

### Standalone Application

1. **Launch the app**:
   ```bash
   open Builds/MacOSX/build/Debug/SoundCollector.app
   ```

2. **Setup your workflow**:
   - **Set File Location**: Click to choose where recordings are saved
   - **Custom Filename**: Enter a prefix for your recordings (e.g., "Guitar_Session")
   - **Monitor Input**: Watch the real-time level meter to ensure proper signal levels

3. **Recording Operation**:
   - **Automatic Recording**: Plugin continuously monitors input and records when audio exceeds threshold
   - **Smart Pause/Resume**: Automatically pauses during silence, resumes when audio returns
   - **Buffer Management**: Always maintains the last 10 seconds of meaningful audio
   - **Status Display**: Color-coded status shows current recording state

4. **Save Options**:
   - **Auto-Save**: Automatically saves every 10 seconds when buffer contains meaningful audio
   - **Quick Save**: Manual button to immediately save the current 10-second buffer
   - **Continuous Operation**: Recording never stops - perfect for live sessions

5. **Test Tone Feature**:
   - **Enable Test Tone**: Checkbox generates 440Hz sine wave for testing
   - **Calibration**: Use to test levels, routing, and save functionality
   - **Bypass Input**: Test tone replaces input audio when enabled

6. **Session Management**:
   - **Persistent Settings**: File locations and prefixes are saved per DAW session
   - **State Restoration**: Settings automatically restore when reopening projects
   - **Organized Workflow**: Each project maintains its own configuration

### Audio Unit Plugin

1. **Install the plugin** (see installation instructions above)

2. **Load in your DAW**:
   - **Logic Pro X**: Insert > Audio Units > SoundCollector
   - **GarageBand**: Smart Controls > Plug-ins > Audio Units > SoundCollector
   - **Ableton Live**: Audio Effects > Audio Units > SoundCollector
   - **Pro Tools**: AudioSuite > Other > SoundCollector (if supported)
   - **Other DAWs**: Look for "SoundCollector" in your Audio Units browser

3. **Plugin Operation**:
   - **Insert on Track**: Place on audio or instrument tracks to capture performance
   - **Session Integration**: Automatically detects DAW project context for intelligent file naming
   - **Real-time Processing**: Minimal latency for live recording sessions
   - **Background Operation**: Continuously captures audio without interrupting workflow

### File Output Details

**File Locations**:
- **Custom Directory**: User-selected folder via "Set File Location" button
- **Desktop Fallback**: Automatically uses Desktop if no custom location set
- **Session-Specific**: Each DAW project remembers its own save location

**File Naming**:
- **Format**: `[Prefix]_[Date]_[Time].wav`
- **Example**: `Guitar_Session_250119_143025.wav`
- **Auto-Save**: Files prefixed with "AutoSave_" for automatic saves
- **Manual Save**: Files prefixed with "QuickSave_" for manual saves

**Audio Quality**:
- **Bit Depth**: 24-bit for professional quality
- **Sample Rate**: Matches input source (44.1kHz, 48kHz, 96kHz, etc.)
- **Channels**: Mono or stereo based on input configuration
- **Duration**: Exactly 10 seconds (or available buffer content)

## Development

### Project Structure

```
sound-collector/
├── Source/
│   ├── PluginProcessor.cpp    # Core audio processing and buffer management
│   ├── PluginProcessor.h      # Audio processor interface and state management
│   ├── PluginEditor.cpp       # Modern grid-based user interface
│   ├── PluginEditor.h         # UI component declarations and layout
│   └── UI/
│       ├── LevelMeterComponent.h    # Real-time audio level visualization
│       └── ThresholdSliderComponent.h  # Audio threshold control widget
├── Builds/
│   └── MacOSX/               # Xcode project files and build configurations
├── JuceLibraryCode/          # JUCE framework integration
└── build_and_run.sh          # Development build script
```

### Current Version: v4.1

**Recent Updates**:
- Modern grid-based UI layout (600x440)
- Test tone generator for calibration
- Session-specific state persistence
- Real-time level metering with dB display
- Optimized 10-second autosave intervals
- Professional visual design with consistent spacing

### Making Changes

1. **Edit source files** in the `Source/` directory
2. **Update version number** in `Source/PluginEditor.cpp`:
     ```cpp
     #define PLUGIN_VERSION "v4.1"  // Increment for releases
     ```
3. **Build and test**:
   ```bash
   ./build_and_run.sh
   ```
4. **Test thoroughly** in both standalone and plugin modes

### Build Targets

- **SoundCollector - Standalone Plugin**: Standalone application
- **SoundCollector - AU**: Audio Unit plugin
- **SoundCollector - VST3**: VST3 plugin (if configured)
- **SoundCollector - All**: Builds all targets

### Build Configurations

- **Debug**: Development builds with debugging symbols
- **Release**: Optimized builds for distribution

## Troubleshooting

### Common Issues

1. **Build fails**: 
   - Ensure Xcode is up to date (latest version recommended)
   - Check that JUCE framework files are properly included
   - Clean build folder and retry: `xcodebuild clean`

2. **Plugin not found in DAW**: 
   - Verify installation path: `/Library/Audio/Plug-Ins/Components/`
   - Restart your DAW completely after installation
   - Check DAW's plugin scan/refresh settings
   - Ensure plugin is compatible with your DAW version

3. **Audio permissions**: 
   - Grant microphone access in System Preferences > Security & Privacy > Privacy > Microphone
   - Restart application after granting permissions
   - Check audio device settings in standalone app

4. **No audio recording**:
   - Verify input levels using the real-time meter
   - Check threshold setting (default: -60dB)
   - Enable test tone to verify signal path
   - Confirm audio device selection in system preferences

5. **Autosave not working**:
   - Ensure "Set File Location" has been configured
   - Check that target directory has write permissions
   - Verify meaningful audio is above threshold for 10+ seconds
   - Monitor status display for recording state

6. **Files not saving to expected location**:
   - Custom locations are session-specific (saved per DAW project)
   - Check Desktop folder if custom location fails
   - Verify directory permissions and available disk space

### Debug Builds

For development and debugging:
```bash
xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -target "SoundCollector - Standalone Plugin" -configuration Debug
```

### Clean Builds

To clean and rebuild:
```bash
xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj clean
xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -target "SoundCollector - Standalone Plugin" -configuration Debug
```

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly
5. Submit a pull request

## License

[Add your license information here]

## Support

For issues and questions:
- Check the troubleshooting section above
- Open an issue on the repository
- Contact the development team

---

## Technical Specifications

- **Framework**: JUCE 7.x
- **Minimum macOS**: 11.0 (Big Sur)
- **Audio Formats**: WAV (24-bit)
- **Sample Rates**: 44.1kHz, 48kHz, 96kHz, 192kHz (input-dependent)
- **Channels**: Mono/Stereo (input-dependent)
- **Plugin Formats**: Audio Unit (AU), VST3
- **Buffer Size**: 10 seconds (adaptive to sample rate)
- **Latency**: Minimal (real-time processing)

**Note**: This is a JUCE-based project. For more information about JUCE, visit [juce.com](https://juce.com).
