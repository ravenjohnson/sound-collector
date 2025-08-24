#!/bin/bash

echo "=== AU Component Extended Attributes Fix ==="
echo "This script will clean extended attributes that prevent AU component code signing"
echo ""

# Step 1: Clean any existing components
echo "Step 1: Cleaning existing components..."
if [ -d "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" ]; then
    sudo xattr -cr "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component"
    echo "✓ Cleaned installed component"
fi

if [ -d "Builds/MacOSX/build/Debug/SoundCollector.component" ]; then
    sudo xattr -cr "Builds/MacOSX/build/Debug/SoundCollector.component"
    echo "✓ Cleaned build directory component"
fi

# Step 2: Create a post-build script that will be called after ditto
echo "Step 2: Creating post-build cleanup script..."
cat > post_build_cleanup.sh << 'EOF'
#!/bin/bash
# This script cleans extended attributes after ditto copy but before codesign

if [ -d "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" ]; then
    echo "Cleaning extended attributes from AU component..."
    xattr -cr "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" 2>/dev/null || true
    echo "Extended attributes cleaned successfully"
fi
EOF

chmod +x post_build_cleanup.sh

echo "✓ Created post-build cleanup script"
echo ""
echo "Now try building in Xcode. If it still fails, run this script again:"
echo "  ./post_build_cleanup.sh"
echo ""
echo "Or manually clean the component:"
echo "  xattr -cr \"$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component\""

