#!/bin/bash

# Create a temporary file with the modified build script
temp_file=$(mktemp)

# Read the project file and modify the AU Plugin Copy Step
awk '/8AB44427DFEC36D744E5359F \/\* Plugin Copy Step \*\/ = {/,/};/ {
    if ($0 ~ /ditto.*destinationPlugin.*/) {
        print $0
        print "  # Clean extended attributes that prevent code signing"
        print "  echo Cleaning extended attributes from \\"${destinationPlugin}\\""
        print "  xattr -cr \\"${destinationPlugin}\\" 2>/dev/null || true"
        print ""
    } else {
        print $0
    }
    next
}
{ print }' "Builds/MacOSX/SoundCollector.xcodeproj/project.pbxproj" > "$temp_file"

# Replace the original file
mv "$temp_file" "Builds/MacOSX/SoundCollector.xcodeproj/project.pbxproj"

echo "Modified AU Plugin Copy Step to clean extended attributes"

