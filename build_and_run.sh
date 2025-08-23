#!/bin/bash

# Exit on any error
set -e

echo "Building SoundCollector plugin..."
# Get the directory where this script is located (project root)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Clean build directory first to ensure fresh rebuild
rm -rf Builds/MacOSX/build

# Clean and build the standalone plugin (with code signing disabled to avoid macOS issues)
xcodebuild -project Builds/MacOSX/SoundCollector.xcodeproj -scheme "SoundCollector - Standalone Plugin" -configuration Debug CODE_SIGN_IDENTITY="" CODE_SIGNING_REQUIRED=NO clean build

# Check if build was successful
if [ $? -eq 0 ]; then
    echo "Build successful! Opening standalone plugin..."
    open Builds/MacOSX/build/Debug/SoundCollector.app
else
    echo "Build failed! Please check the error messages above."
    exit 1
fi
