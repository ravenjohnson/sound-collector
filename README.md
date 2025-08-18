# SoundCollector

A JUCE-based audio plugin and standalone application for sound collection and processing.

## Features

- **Audio Plugin**: Available as AU (Audio Unit) plugin for macOS
- **Standalone Application**: Resizable standalone app for direct audio processing
- **Smart Pause/Resume Recording**: Automatically pauses recording when audio drops below threshold and resumes when audio returns
- **Audio Snippet Collage**: Creates a collection of audio snippets by only recording actual audio content, skipping silence
- **Circular Buffer**: Maintains the last 10 seconds of recorded audio snippets in memory
- **Automatic Saving**: Automatically saves audio when the buffer receives 10 seconds of audio content
- **Manual Save**: Optional manual save button for the last 10 seconds of audio
- **Save Timestamps**: Visual feedback showing when saves occur with timestamps
- **Level Metering**: Real-time input and output level monitoring
- **WAV Export**: Automatically saves recordings as timestamped WAV files to Desktop
- **Cross-Platform**: Built with JUCE framework for maximum compatibility
- **Resizable Interface**: User-friendly resizable window (300x200 to 1200x800 pixels)
- **Parameter Persistence**: Settings are saved and restored automatically

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

### Standalone Application

1. **Launch the app**:
   ```bash
   open Builds/MacOSX/build/Debug/SoundCollector.app
   ```

2. **Automatic continuous recording**: 
   - **Threshold-triggered recording** - Only starts recording when audio exceeds the threshold (-60dB default)
   - **Smart pause/resume** - automatically pauses when audio drops below threshold, resumes when audio returns
   - **Minimal setup** - just adjust the threshold if needed, then start playing audio
   - **Status indicator** shows recording state (paused/active) with color coding

3. **Save the last 10 seconds**: 
    - **Click "Manual Save (10s)"** to capture the current buffer contents
   - **Recording continues** - the buffer keeps running after saving
   - **Perfect for capturing ideas** - never miss a moment
   - **Tesla dashcam style** - always ready to save what just happened

4. **Monitor levels**: 
   - **Input Level**: Shows the incoming audio signal level
   - **Output Level**: Shows the processed audio signal level (always passes through)
   - **Updates**: 30 times per second for real-time feedback

5. **Access recordings**: 
   - **Location**: Configurable save location:
     - **Session Folder**: Saves to `ProjectFolder/SoundCollection/` (default)
     - **Desktop**: Saves to Desktop folder (fallback)
     - **Custom Folder**: User-selectable folder (future feature)
   - **Format**: WAV files with project-aware naming:
     - **With project**: "ProjectName_240115_143025.wav" (YYMMDD_HHMMSS format)
     - **Fallback**: "Project_AU_240115_143025.wav" (includes host type)
     - **Quality**: 24-bit, original sample rate and channel count
   - **Duration**: Always 10 seconds (or less if buffer hasn't filled yet)

6. **Resize the window**: Drag the edges or corners to resize (300x200 to 1200x800 pixels)

5. **Audio Setup**: The app will prompt for audio device permissions on first run

### Audio Unit Plugin

1. **Install the plugin** (see installation instructions above)

2. **Load in your DAW**:
   - **Logic Pro X**: Audio Units > SoundCollector
   - **GarageBand**: Audio Units > SoundCollector
   - **Ableton Live**: Audio Units > SoundCollector
   - **Other DAWs**: Look for "SoundCollector" in your plugin browser

## Development

### Project Structure

```
sound-collector/
├── Source/
│   ├── PluginProcessor.cpp    # Audio processing logic
│   ├── PluginProcessor.h
│   ├── PluginEditor.cpp       # User interface
│   └── PluginEditor.h
├── Builds/
│   └── MacOSX/               # Xcode project files
├── JuceLibraryCode/          # JUCE framework files
└── build_and_run.sh          # Quick build script
```

### Making Changes

1. **Edit source files** in the `Source/` directory
2. **Update version number** (if needed) in `Source/PluginEditor.cpp`:
     ```cpp
     #define PLUGIN_VERSION "v2.7"  // Change to v1.1, v1.2, etc.
     ```
3. **Build the project**:
   ```bash
   ./build_and_run.sh
   ```
4. **Test your changes** in the standalone app or your DAW

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

1. **Build fails**: Make sure Xcode is up to date
2. **Plugin not found**: Check installation path and restart your DAW
3. **Audio permissions**: Grant microphone access in System Preferences > Security & Privacy

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

**Note**: This is a JUCE-based project. For more information about JUCE, visit [juce.com](https://juce.com).
