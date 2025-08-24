#!/bin/bash

echo "=== Alternative Solution: Modified Build Script ==="
echo "Creating a modified build script that avoids extended attributes issues..."

# Create a modified build script that uses cp instead of ditto
cat > modified_build_script.sh << 'EOF'
#!/bin/bash
set -euo pipefail

if [[ "${CONFIGURATION}" == "Debug" ]]; then
  destinationPlugin="${HOME}/Library/Audio/Plug-Ins/Components/$(basename "${TARGET_BUILD_DIR}/${WRAPPER_NAME}")"
  echo Running rm -rf "${destinationPlugin}"
  rm -rf "${destinationPlugin}"
  
  echo Running cp -R "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" "${destinationPlugin}"
  cp -R "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" "${destinationPlugin}"
  
  # Clean any extended attributes that might have been copied
  echo Cleaning extended attributes from "${destinationPlugin}"
  xattr -cr "${destinationPlugin}" 2>/dev/null || true

  if [[ -n "${EXPANDED_CODE_SIGN_IDENTITY-}" ]]; then
    if [[ -n "${CODE_SIGN_ENTITLEMENTS-}" ]]; then
      entitlementsArg=(--entitlements "${CODE_SIGN_ENTITLEMENTS}")
    fi

    echo Signing Identity: "${EXPANDED_CODE_SIGN_IDENTITY_NAME}"
    echo Running codesign --verbose=4 --force --sign "${EXPANDED_CODE_SIGN_IDENTITY}" ${entitlementsArg[*]-} ${OTHER_CODE_SIGN_FLAGS-} "${destinationPlugin}"
    codesign --verbose=4 --force --sign "${EXPANDED_CODE_SIGN_IDENTITY}" ${entitlementsArg[*]-} ${OTHER_CODE_SIGN_FLAGS-} "${destinationPlugin}"
  fi
fi

if [[ "${CONFIGURATION}" == "Release" ]]; then
  destinationPlugin="${HOME}/Library/Audio/Plug-Ins/Components/$(basename "${TARGET_BUILD_DIR}/${WRAPPER_NAME}")"
  echo Running rm -rf "${destinationPlugin}"
  rm -rf "${destinationPlugin}"
  
  echo Running cp -R "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" "${destinationPlugin}"
  cp -R "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" "${destinationPlugin}"
  
  # Clean any extended attributes that might have been copied
  echo Cleaning extended attributes from "${destinationPlugin}"
  xattr -cr "${destinationPlugin}" 2>/dev/null || true

  if [[ -n "${EXPANDED_CODE_SIGN_IDENTITY-}" ]]; then
    if [[ -n "${CODE_SIGN_ENTITLEMENTS-}" ]]; then
      entitlementsArg=(--entitlements "${CODE_SIGN_ENTITLEMENTS}")
    fi

    echo Signing Identity: "${EXPANDED_CODE_SIGN_IDENTITY_NAME}"
    echo Running codesign --verbose=4 --force --sign "${EXPANDED_CODE_SIGN_IDENTITY}" ${entitlementsArg[*]-} ${OTHER_CODE_SIGN_FLAGS-} "${destinationPlugin}"
    codesign --verbose=4 --force --sign "${EXPANDED_CODE_SIGN_IDENTITY}" ${entitlementsArg[*]-} ${OTHER_CODE_SIGN_FLAGS-} "${destinationPlugin}"
  fi
fi
EOF

chmod +x modified_build_script.sh

echo "✓ Created modified build script"
echo ""
echo "To use this script:"
echo "1. In Xcode, go to your AU target"
echo "2. Find the Plugin Copy Step build phase"
echo "3. Replace the script content with the contents of modified_build_script.sh"
echo ""
echo "Or you can try building now and if it fails, run:"
echo "  ./post_build_cleanup.sh"

