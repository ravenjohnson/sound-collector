#!/bin/bash

echo "=== Pre-Build Extended Attributes Cleanup ==="
echo "Cleaning extended attributes before building..."

# Clean build directory
if [ -d "Builds/MacOSX/build/Debug/SoundCollector.component" ]; then
    echo "Cleaning build directory component..."
    xattr -cr "Builds/MacOSX/build/Debug/SoundCollector.component" 2>/dev/null || true
    echo "✓ Build directory cleaned"
fi

# Clean installed component
if [ -d "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" ]; then
    echo "Cleaning installed component..."
    xattr -cr "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" 2>/dev/null || true
    echo "✓ Installed component cleaned"
fi

echo ""
echo "✅ Extended attributes cleaned!"
echo "You can now build in Xcode without extended attributes issues."
echo ""
echo "If you still get errors, run this script again after cleaning the build:"
echo "  xcodebuild clean"
echo "  ./pre_build_cleanup.sh"

