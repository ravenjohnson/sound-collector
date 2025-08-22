#!/bin/bash

# Exit on any error
set -e

echo "Building SoundCollector plugin..."
cd ~/Documents/workspaces/sound-collector

# Clean and build the standalone plugin
xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -scheme "SoundCollector - Standalone Plugin" -configuration Debug clean build

# Check if build was successful
if [ $? -eq 0 ]; then
    echo "Build successful! Opening standalone plugin..."
    open /Users/hrafn/Documents/workspaces/sound-collector/Builds/MacOSX/build/Debug/SoundCollector.app
else
    echo "Build failed! Please check the error messages above."
    exit 1
fi
