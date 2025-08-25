#!/bin/bash

echo "=== Adding xattr cleaning to Xcode build process ==="

# Add a new build phase to clean xattr before code signing
echo "Adding xattr cleaning build phase..."

# Create the script content
SCRIPT_CONTENT='#!/bin/bash
# Clean xattr before code signing
echo "Cleaning extended attributes before code signing..."
xattr -cr "${BUILT_PRODUCTS_DIR}/${WRAPPER_NAME}"
echo "✓ Extended attributes cleaned"
'

# Write the script to a file
echo "$SCRIPT_CONTENT" > "Builds/MacOSX/clean_xattr.sh"
chmod +x "Builds/MacOSX/clean_xattr.sh"

echo "✓ xattr cleaning script created"

echo ""
echo "=== Manual Instructions ==="
echo ""
echo "1. Open Xcode and load your project"
echo "2. Select the 'SoundCollector - AU' target"
echo "3. Go to 'Build Phases' tab"
echo "4. Click the '+' button and select 'New Run Script Phase'"
echo "5. Name it 'Clean xattr before code signing'"
echo "6. Add this script:"
echo "   xattr -cr \"\${BUILT_PRODUCTS_DIR}/\${WRAPPER_NAME}\""
echo "7. Move this phase to run BEFORE the 'Code Sign' phase"
echo ""
echo "Now when you build in Xcode:"
echo "1. The xattr will be cleaned automatically"
echo "2. Code signing will succeed"
echo "3. The plugin will work in Ableton Live"
echo ""
