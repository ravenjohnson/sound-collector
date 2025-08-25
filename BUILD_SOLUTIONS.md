# SoundCollector Plugin Build Solutions

This document explains the different build scripts available to solve the version mismatch and code signing issues.

## Problem Summary

1. **Version Mismatch**: Plugin UI showed v5.2 but Ableton Live showed 5.1
2. **Code Signing Error**: Extended attributes (xattr) preventing code signing

## Available Solutions

### 1. `complete_build_solution.sh` (RECOMMENDED)

**Use this for a complete solution that fixes both issues.**

This script:

- ✅ Fixes version to 5.2.0 in all files
- ✅ Regenerates JUCE project files
- ✅ Builds without code signing
- ✅ Cleans extended attributes
- ✅ Installs the plugin automatically

```bash
./complete_build_solution.sh
```

### 2. `build_without_codesign.sh`

**Use this if you just want to build without code signing (version already fixed).**

This script:

- ✅ Builds AU and Standalone plugins
- ✅ Disables code signing completely
- ✅ Avoids xattr issues

```bash
./build_without_codesign.sh
```

### 3. `fix_xattr_and_build.sh`

**Use this if you want to build with code signing but fix xattr issues.**

This script:

- ✅ Builds without code signing
- ✅ Cleans extended attributes
- ✅ Installs plugin automatically

```bash
./fix_xattr_and_build.sh
```

### 4. `fix_xattr_only.sh`

**Use this if you already have a built plugin and just need to fix xattr.**

This script:

- ✅ Cleans extended attributes from existing builds
- ✅ Quick fix for code signing issues

```bash
./fix_xattr_only.sh
```

### 5. `check_version.sh`

**Use this to verify version consistency across all files.**

This script:

- ✅ Checks .jucer file version
- ✅ Checks JucePluginDefines.h version
- ✅ Checks PluginEditor.cpp version
- ✅ Shows installed plugin version

```bash
./check_version.sh
```

### 6. `fix_xcode_project.sh`

**Use this to disable code signing in the Xcode project file.**

This script:

- ✅ Modifies the Xcode project to disable code signing
- ✅ Creates a backup of the original project file
- ✅ Allows you to build in Xcode without code signing issues

```bash
./fix_xcode_project.sh
```

### 7. `simple_build_and_install.sh`

**Use this for a simple build without any auto-install scripts.**

This script:

- ✅ Builds AU and Standalone plugins
- ✅ Skips auto-install and code signing
- ✅ Provides manual installation instructions

```bash
./simple_build_and_install.sh
```

## Manual Steps (if scripts don't work)

### Fix Version Issues

1. Update `SoundCollector.jucer`: Add `pluginVersion="5.2.0"`
2. Run Projucer: `/Applications/JUCE/Projucer.app/Contents/MacOS/Projucer --resave SoundCollector.jucer`
3. Update `Source/PluginEditor.cpp`: Change `PLUGIN_VERSION` to `"5.2.0"`

### Fix Code Signing Issues

1. Clean build directory: `rm -rf Builds/MacOSX/build`
2. Build without code signing:
   ```bash
   xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj \
       -scheme "SoundCollector - AU" \
       -configuration Debug \
       CODE_SIGN_IDENTITY="" \
       CODE_SIGNING_REQUIRED=NO \
       CODE_SIGNING_ALLOWED=NO \
       clean build
   ```
3. Clean extended attributes: `xattr -cr Builds/MacOSX/build/Debug/SoundCollector.component`

## Expected Results

After running any of the build scripts:

- Plugin should show version 5.2.0 in Ableton Live
- No code signing errors
- Plugin should work normally

## Troubleshooting

### If you still see version 5.1 in Ableton Live:

1. Run `./check_version.sh` to verify all files have correct version
2. Make sure you're using the newly built plugin
3. Restart Ableton Live
4. Check if there are multiple plugin installations

### If you get code signing errors:

1. Run `./fix_xattr_only.sh` to clean extended attributes
2. Try building without code signing using `./build_without_codesign.sh`
3. Check System Preferences > Security & Privacy for any blocked apps

### If Xcode build scripts cause errors:

1. Run `./fix_xcode_project.sh` to disable code signing in the project
2. Or use `./simple_build_and_install.sh` to build without auto-install scripts
3. Or manually disable the "Run Script" phases in Xcode Build Phases

### If the plugin doesn't load in Ableton Live:

1. Check if the plugin is properly installed in `/Users/hrafnthoroddsen/Library/Audio/Plug-Ins/Components/`
2. Restart Ableton Live
3. Check Ableton Live's plugin preferences
4. Try the standalone version first to test functionality
