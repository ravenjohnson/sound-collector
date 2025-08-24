#!/bin/bash

# Fix extended attributes issue for AU component
echo "Cleaning extended attributes from AU component..."

# Clean the build directory component
if [ -d "Builds/MacOSX/build/Debug/SoundCollector.component" ]; then
    xattr -cr "Builds/MacOSX/build/Debug/SoundCollector.component"
    echo "Cleaned build directory component"
fi

# Clean the installed component
if [ -d "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component" ]; then
    xattr -cr "$HOME/Library/Audio/Plug-Ins/Components/SoundCollector.component"
    echo "Cleaned installed component"
fi

echo "Extended attributes cleaning complete!"

