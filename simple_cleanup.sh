#!/bin/bash

# Simple and robust extended attributes cleanup
if [ -d "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" ]; then
    xattr -cr "${TARGET_BUILD_DIR}/${WRAPPER_NAME}" 2>/dev/null || true
fi

exit 0

