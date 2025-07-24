target_precompile_headers(mod
    PRIVATE
        Pch.h
)
target_sources(mod
    PRIVATE
        version.rc
        DllMain.cpp
        Mod.cpp
    PRIVATE FILE_SET HEADERS FILES
        Pch.h
        utilities/Helpers.h

 "KronosDigSpots.h" "ChaosDigSpots.h" "OuranosDigSpots.h"  "KronosMemoryTokens.h"  "Cyberspace.h" "KronosMap.h" "AresMap.h" "OuranosMap.h")