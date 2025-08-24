#!/bin/bash

echo "Pre-Code Sign Cleanup: Cleaning extended attributes..."

# Clean the component that will be code signed
if [ -d "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" ]; then
    echo "Cleaning extended attributes from ${TARGET_BUILD_DIR}/${WRAPPER_NAME}"
    
    # More aggressive cleaning
    xattr -cr "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" 2>/dev/null || true
    
    # Remove specific problematic attributes
    xattr -d com.apple.FinderInfo "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" 2>/dev/null || true
    xattr -d com.apple.fileprovider.fpfs#P "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" 2>/dev/null || true
    xattr -d com.apple.provenance "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" 2>/dev/null || true
    
    echo "Extended attributes cleaned successfully"
else
    echo "Warning: Component not found at ${TARGET_BUILD_DIR}/${WRAPPER_NAME}"
fi

echo "Pre-Code Sign Cleanup completed successfully"
exit 0

