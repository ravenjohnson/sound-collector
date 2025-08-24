#!/bin/bash

# Comprehensive fix for AU component extended attributes issue
echo "=== AU Component Extended Attributes Fix ==="

# Step 1: Clean all extended attributes recursively
echo "Step 1: Cleaning extended attributes..."

# Clean build directory
if [ -d "Builds/MacOSX/build/Debug/SoundCollector.component" ]; then
    sudo xattr -cr "Builds/MacOSX/build/Debug/SoundCollector.component"
    echo "✓ Cleaned build directory component"
fi

# Clean installed component
if [ -d "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" ]; then
    sudo xattr -cr "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component"
    echo "✓ Cleaned installed component"
fi

# Step 2: Remove specific problematic attributes
echo "Step 2: Removing specific problematic attributes..."

# Remove FinderInfo
xattr -d com.apple.FinderInfo "Builds/MacOSX/build/Debug/SoundCollector.component" 2>/dev/null || true
xattr -d com.apple.fileprovider.fpfs#P "Builds/MacOSX/build/Debug/SoundCollector.component" 2>/dev/null || true
xattr -d com.apple.provenance "Builds/MacOSX/build/Debug/SoundCollector.component" 2>/dev/null || true

echo "✓ Removed specific attributes"

# Step 3: Verify cleaning
echo "Step 3: Verifying extended attributes..."
xattr -l "Builds/MacOSX/build/Debug/SoundCollector.component" 2>/dev/null || echo "No extended attributes found"

echo "=== Fix Complete ==="
echo ""
echo "Now try building in Xcode again. If the issue persists,"
echo "you may need to:"
echo "1. Clean the build folder in Xcode (Product > Clean Build Folder)"
echo "2. Delete derived data (Xcode > Preferences > Locations > Derived Data > Delete)"
echo "3. Rebuild the project"

