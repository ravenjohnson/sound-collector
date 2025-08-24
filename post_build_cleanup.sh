#!/bin/bash
# This script cleans extended attributes after ditto copy but before codesign

if [ -d "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" ]; then
    echo "Cleaning extended attributes from AU component..."
    xattr -cr "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" 2>/dev/null || true
    echo "Extended attributes cleaned successfully"
fi
