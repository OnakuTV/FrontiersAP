cmake_minimum_required(VERSION 3.28)
project(rsdk-example VERSION 0.0.1
                 DESCRIPTION "rangers-sdk example"
                 LANGUAGES CXX)

set(PROJECT_AUTHOR "angryzor")
set(PROJECT_LONG_DESCRIPTION "rangers-sdk example")
set(PROJECT_COPYRIGHT "Copyright (c) 2024 angryzor - Licensed under GPL3")
set(PROJECT_AUTHOR_URL "https://github.com/angryzor")
set(PROJECT_UPDATE_SERVER "https://raw.githubusercontent.com/angryzor/hmm-update-server/main/sonic-frontiers/rsdk-example/")
option(INSTALL_TO_UPDATE_SERVER "Install to update server" OFF)
set(UPDATE_SERVER_PATH "" CACHE PATH "Path to update server")
string(TIMESTAMP PROJECT_BUILD_DATE "%Y-%m-%d")


include(FetchContent)
FetchContent_Declare(APCpp GIT_REPOSITORY https://github.com/N00byKing/APCpp.git GIT_TAG main)
FetchContent_MakeAvailable(APCpp)

set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>")

set(GAME_FOLDER "E:\\SteamLibrary\\steamapps\\common\\SonicFrontiers" CACHE STRING "The location of your game folder.")
cmake_path(SET GAME_FOLDER_NORMALIZED NORMALIZE ${GAME_FOLDER})
cmake_path(APPEND GAME_FOLDER_NORMALIZED "SonicFrontiers.exe" OUTPUT_VARIABLE SONIC_FRONTIERS_GAME_EXECUTABLE)

if(DEFINED ENV{SONIC_FRONTIERS_SDK})
    message("SONIC_FRONTIERS_SDK environment variable found. Using this version instead of the local submodule.")
    cmake_path(SET RANGERS_SDK_PATH NORMALIZE $ENV{SONIC_FRONTIERS_SDK})
else()
    set(RANGERS_SDK_PATH rangers-sdk)
endif()

if(INSTALL_TO_UPDATE_SERVER)
    cmake_path(SET UPDATE_SERVER_PATH_NORMALIZED NORMALIZE ${UPDATE_SERVER_PATH})
    message("Install to update server enabled. Update server path is ${UPDATE_SERVER_PATH}")
endif()

add_subdirectory(vendor EXCLUDE_FROM_ALL)
add_subdirectory(${RANGERS_SDK_PATH} rangers-sdk EXCLUDE_FROM_ALL)

add_library(mod SHARED)
target_compile_features(mod PRIVATE cxx_std_20)
target_compile_options(mod PRIVATE /permissive-)
target_compile_definitions(mod
    PRIVATE
        PROJECT_BINARY_FILENAME=$<TARGET_FILE_NAME:mod>
        PROJECT_NAME="${PROJECT_NAME}"
        PROJECT_AUTHOR="${PROJECT_AUTHOR}"
        PROJECT_DESCRIPTION="${PROJECT_DESCRIPTION}"
        PROJECT_LONG_DESCRIPTION="${PROJECT_LONG_DESCRIPTION}"
        PROJECT_COPYRIGHT="${PROJECT_COPYRIGHT}"
        PROJECT_AUTHOR_URL="${PROJECT_AUTHOR_URL}"
        PROJECT_UPDATE_SERVER="${PROJECT_UPDATE_SERVER}"
        PROJECT_BUILD_DATE="${PROJECT_BUILD_DATE}"
        PROJECT_VERSION=${PROJECT_VERSION}
        PROJECT_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}
        PROJECT_VERSION_MINOR=${PROJECT_VERSION_MINOR}
        PROJECT_VERSION_PATCH=${PROJECT_VERSION_PATCH}
)
set_target_properties(mod
    PROPERTIES
        OUTPUT_NAME ${PROJECT_NAME}
        VS_DEBUGGER_COMMAND ${SONIC_FRONTIERS_GAME_EXECUTABLE}
        VS_DEBUGGER_WORKING_DIRECTORY ${GAME_FOLDER_NORMALIZED}
)

target_link_libraries(mod PRIVATE rangers-sdk detours APCpp)

add_subdirectory(src)
configure_file(mod.ini.in mod.ini)
configure_file(mod_version.ini.in mod_version.ini)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT mod)

cmake_path(APPEND GAME_FOLDER_NORMALIZED "Mods" OUTPUT_VARIABLE MODS_FOLDER)
cmake_path(APPEND MODS_FOLDER "${PROJECT_NAME}" OUTPUT_VARIABLE MOD_FOLDER)

install(TARGETS mod RUNTIME DESTINATION "${MOD_FOLDER}")
install(TARGETS APCpp RUNTIME DESTINATION "${MOD_FOLDER}")
install(DIRECTORY resources/ DESTINATION "${MOD_FOLDER}")
install(FILES LICENSE.txt CHANGELOG.md "${CMAKE_CURRENT_BINARY_DIR}/mod.ini" DESTINATION "${MOD_FOLDER}")

install(CODE "
    file(MAKE_DIRECTORY \"${CMAKE_CURRENT_BINARY_DIR}/archives\")
    execute_process(
        COMMAND \$\{CMAKE_COMMAND} \"-E\" \"tar\" \"cvf\" \"${CMAKE_CURRENT_BINARY_DIR}/archives/${PROJECT_NAME}-v${PROJECT_VERSION}.zip\" \"--format=zip\" \"${PROJECT_NAME}\"
        WORKING_DIRECTORY \"${MODS_FOLDER}\"
    )
")

if(DEFINED UPDATE_SERVER_PATH_NORMALIZED)
    cmake_path(APPEND UPDATE_SERVER_PATH_NORMALIZED "sonic-frontiers/${PROJECT_NAME}" OUTPUT_VARIABLE UPDATE_SERVER_MOD_FOLDER)

    install(TARGETS mod RUNTIME DESTINATION ${UPDATE_SERVER_MOD_FOLDER})
    install(DIRECTORY resources/ DESTINATION ${UPDATE_SERVER_MOD_FOLDER})
    install(FILES LICENSE.txt CHANGELOG.md "${CMAKE_CURRENT_BINARY_DIR}/mod.ini" "${CMAKE_CURRENT_BINARY_DIR}/mod_version.ini" DESTINATION ${UPDATE_SERVER_MOD_FOLDER})

    install(CODE "
        file(GLOB_RECURSE UPDATE_SERVER_FILES LIST_DIRECTORIES false RELATIVE \"${UPDATE_SERVER_MOD_FOLDER}\" \"${UPDATE_SERVER_MOD_FOLDER}/*\")
        list(REMOVE_ITEM UPDATE_SERVER_FILES \"mod_files.txt\" \"mod_version.ini\")
        list(TRANSFORM UPDATE_SERVER_FILES PREPEND \"add \")
        list(JOIN UPDATE_SERVER_FILES \"\\n\" UPDATE_SERVER_MOD_FILES_CONTENT)
        file(WRITE \"${UPDATE_SERVER_MOD_FOLDER}/mod_files.txt\" \"\${UPDATE_SERVER_MOD_FILES_CONTENT}\\n\")
    ")
endif()
