#!/bin/bash

echo "=== Adding Pre-Code Sign Cleanup Build Phase ==="

# Create the cleanup script
cat > pre_codesign_cleanup.sh << 'EOF'
#!/bin/bash
set -euo pipefail

echo "Pre-Code Sign Cleanup: Cleaning extended attributes..."

# Clean the component that will be code signed
if [ -d "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" ]; then
    echo "Cleaning extended attributes from ${TARGET_BUILD_DIR}/${WRAPPER_NAME}"
    xattr -cr "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" 2>/dev/null || true
    echo "Extended attributes cleaned successfully"
else
    echo "Warning: Component not found at ${TARGET_BUILD_DIR}/${WRAPPER_NAME}"
fi
EOF

chmod +x pre_codesign_cleanup.sh

echo "✓ Created pre_codesign_cleanup.sh"
echo ""
echo "To add this as a build phase in Xcode:"
echo "1. Open your Xcode project"
echo "2. Select your AU target"
echo "3. Go to Build Phases tab"
echo "4. Click + and select New Run Script Phase"
echo "5. Name it Pre-Code Sign Cleanup"
echo "6. Add this script:"
echo "   ./pre_codesign_cleanup.sh"
echo "7. Make sure this phase runs BEFORE the Code Sign phase"
echo ""
echo "Or run this script manually before building:"
echo "  ./pre_build_cleanup.sh"

