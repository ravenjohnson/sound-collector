#!/bin/bash
# Clean xattr before code signing
echo "Cleaning extended attributes before code signing..."
xattr -cr "${BUILT_PRODUCTS_DIR}/${WRAPPER_NAME}"
echo "✓ Extended attributes cleaned"

