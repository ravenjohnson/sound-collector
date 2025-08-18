#!/bin/bash

# Exit on any error
set -e

echo "Building SoundCollector plugin..."
cd ~/Documents/workspaces/sound-collector

# Build the standalone plugin
xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -target "SoundCollector - Standalone Plugin" -configuration Debug

# Check if build was successful
if [ $? -eq 0 ]; then
    echo "Build successful! Opening standalone plugin..."
    open Builds/MacOSX/build/Debug/SoundCollector.app
else
    echo "Build failed! Please check the error messages above."
    exit 1
fi
