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
