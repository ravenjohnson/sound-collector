/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   background_png;
    const int            background_pngSize = 8152;

    extern const char*   buttonlocationhover_png;
    const int            buttonlocationhover_pngSize = 862;

    extern const char*   buttonlocation_png;
    const int            buttonlocation_pngSize = 866;

    extern const char*   buttonsavehover_png;
    const int            buttonsavehover_pngSize = 790;

    extern const char*   buttonsave_png;
    const int            buttonsave_pngSize = 830;

    extern const char*   staterecording_png;
    const int            staterecording_pngSize = 1364;

    extern const char*   statewaiting_png;
    const int            statewaiting_pngSize = 1257;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 7;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
