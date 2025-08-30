#!/bin/bash

echo "=== Building and Installing Plugin + Standalone (Manual Method) ==="

# Step 1: Build AU without auto-install
echo "Step 1: Building AU plugin..."
xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -scheme "SoundCollector - AU" -configuration Debug build CODE_SIGN_IDENTITY="" CODE_SIGNING_REQUIRED=NO

# Step 2: Check if build succeeded
if [ ! -d "Builds/MacOSX/build/Debug/SoundCollector.component" ]; then
    echo "✗ Build failed!"
    exit 1
fi

echo "✓ Plugin built successfully"

# Step 1b: Build Standalone app
echo "Step 1b: Building Standalone app..."
xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -scheme "SoundCollector - Standalone" -configuration Debug build CODE_SIGN_IDENTITY="" CODE_SIGNING_REQUIRED=NO

# Verify Standalone build
if [ ! -d "Builds/MacOSX/build/Debug/SoundCollector.app" ]; then
    echo "✗ Standalone build failed!"
    exit 1
fi

echo "✓ Standalone app built successfully"

# Step 3: Clean xattr
echo "Step 2: Cleaning extended attributes..."
xattr -cr "Builds/MacOSX/build/Debug/SoundCollector.component"
xattr -cr "Builds/MacOSX/build/Debug/SoundCollector.app"
echo "✓ Extended attributes cleaned"

# Step 4: Code sign manually
echo "Step 3: Code signing plugin..."
codesign --force --sign - --timestamp=none "Builds/MacOSX/build/Debug/SoundCollector.component"
echo "✓ Plugin code signed"

echo "Step 3b: Code signing Standalone app..."
codesign --force --sign - --timestamp=none "Builds/MacOSX/build/Debug/SoundCollector.app"
echo "✓ Standalone app code signed"

# Step 5: Install
echo "Step 4: Installing plugin..."
PLUGIN_DIR="$HOME/Library/Audio/Plug-Ins/Components"
sudo rm -rf "$PLUGIN_DIR/SoundCollector.component"
sudo cp -R "Builds/MacOSX/build/Debug/SoundCollector.component" "$PLUGIN_DIR/"
sudo chown -R $(whoami):staff "$PLUGIN_DIR/SoundCollector.component"
echo "✓ Plugin installed"

echo "Step 4b: Installing Standalone app..."
APP_DIR="/Applications"
sudo rm -rf "$APP_DIR/SoundCollector.app"
sudo cp -R "Builds/MacOSX/build/Debug/SoundCollector.app" "$APP_DIR/"
sudo chown -R $(whoami):staff "$APP_DIR/SoundCollector.app"
echo "✓ Standalone app installed"

# Step 6: Verify version
VERSION=$(plutil -p "Builds/MacOSX/build/Debug/SoundCollector.component/Contents/Info.plist" | grep "CFBundleShortVersionString" | cut -d'"' -f4)
echo "✓ Plugin version: $VERSION"

echo ""
echo "=== Success! ==="
echo "Plugin installed and ready to use in Ableton Live"
echo "Standalone installed to /Applications"
echo "Version: $VERSION"
echo ""

# Step 7: Open the installed plugin folder
echo "Step 5: Opening plugin folder..."
open "$PLUGIN_DIR"
echo "✓ Plugin folder opened in Finder"
echo ""

# Step 8: Open the Applications folder (optional)
echo "Step 6: Opening Applications folder..."
open "/Applications"
echo "✓ Applications folder opened in Finder"
echo ""
