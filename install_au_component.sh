#!/bin/bash

echo "=== Manual AU Component Installation ==="
echo "This script will manually install the AU component after building"

# Check if the build was successful
if [ ! -d "Builds/MacOSX/build/Debug/SoundCollector.component" ]; then
    echo "❌ Error: SoundCollector.component not found in build directory"
    echo "Please build the project first in Xcode"
    exit 1
fi

# Remove existing component
echo "Removing existing component..."
rm -rf "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component"

# Copy the component
echo "Installing AU component..."
cp -R "Builds/MacOSX/build/Debug/SoundCollector.component" "$HOME/Library/Audio/Plug-Ins/Components/"

# Clean extended attributes
echo "Cleaning extended attributes..."
xattr -cr "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" 2>/dev/null || true

# Code sign the component
echo "Code signing component..."
codesign --force --sign "-" "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component"

echo "✅ AU component installed successfully!"
echo "You may need to restart your DAW to see the plugin"

