cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
set(PROJECT_NAME PyLoader)
project(${PROJECT_NAME} CXX)

################################################################################
# Configure paths
################################################################################
set(GTA_SA_DIR C:/Work/GTASanAndreas)

# Can ignore the below paths if you got them in system paths
set(PLUGIN_SDK_DIR $ENV{PLUGIN_SDK_DIR})
set(PYTHON_DIR "C:\\Program Files (x86)\\Python38-32")
################################################################################

################################################################################
# Source groups
################################################################################
set(src_files
    "src/pch.h"
    "src/DllMain.cpp"
    "src/PyLoader.h"
    "src/PyLoader.cpp"
    "src/sdk/PyCommon.h"
    "src/sdk/PyCommon.cpp"
    "src/sdk/PyCHud.h"
    "src/sdk/PyCHud.cpp"
    "src/sdk/PyOpcodes.h"
    "src/sdk/PyOpcodes.cpp"
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} SHARED ${src_files})

target_precompile_headers(${PROJECT_NAME} PUBLIC "src/pch.h")

string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
    $<$<CONFIG:Release>:
        MultiThreaded
    >
    $<$<CONFIG:Debug>:
        MultiThreadedDebug
    >
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY  "${GTA_SA_DIR}/$<0:>/"
    SUFFIX ".asi"
    MSVC_RUNTIME_LIBRARY ${MSVC_RUNTIME_LIBRARY_STR}
)

################################################################################
# Include directories
################################################################################
include_directories(
    "${PLUGIN_SDK_DIR}/plugin_sa"
    "${PLUGIN_SDK_DIR}/plugin_sa/game_sa"
    "${PLUGIN_SDK_DIR}/shared"
    "${PLUGIN_SDK_DIR}/shared/game"
    "${PYTHON_DIR}/include"
)

################################################################################
# Compile definitions
################################################################################
target_compile_definitions(${PROJECT_NAME} PRIVATE
    "$<$<CONFIG:Release>:"
        "_NDEBUG"
    ">"
    "$<$<CONFIG:Debug>:"
        "_DEBUG"
    ">"
    "_CRT_SECURE_NO_WARNINGS;"
    "_CRT_NON_CONFORMING_SWPRINTFS;"
    "GTASA;"
    "PLUGIN_SGV_10US;"
    "_MBCS"
    "IS_PLATFORM_WIN"
    "PY_SSIZE_T_CLEAN"
)

################################################################################
# Compile and link options
################################################################################

target_compile_options(${PROJECT_NAME} PRIVATE
    $<$<CONFIG:Release>:
        /O2;
        /Oi;
        /Gy
    >
    $<$<CONFIG:Debug>:
        /Od
        /DEBUG:FULL
    >
    $<$<COMPILE_LANGUAGE:CXX>:/std:c++latest>
    /sdl-;
    /W3;
    ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
    ${DEFAULT_CXX_EXCEPTION_HANDLING}
    /w44005
    /w44996
)
string(CONCAT FILE_CL_OPTIONS
    "/Y-"
)
target_link_options(${PROJECT_NAME} PRIVATE
    $<$<CONFIG:Release>:
        /OPT:REF;
        /LTCG;
        /OPT:ICF;
    >
    $<$<CONFIG:Debug>:
        /DEBUG:FULL;
        /SAFESEH:NO;
    >
    /SUBSYSTEM:WINDOWS
)

################################################################################
# Pre build events
################################################################################
add_custom_command(
    TARGET ${PROJECT_NAME} 
    PRE_BUILD
    COMMAND  taskkill /f /fi "imagename eq gta_sa.exe"
)

################################################################################
# Dependencies
################################################################################
target_link_libraries(${PROJECT_NAME} PUBLIC 
optimized plugin
debug plugin_d
)

target_link_directories(${PROJECT_NAME} PUBLIC
    "${PLUGIN_SDK_DIR}/output/lib/"
    "${PYTHON_DIR}/libs"
)



