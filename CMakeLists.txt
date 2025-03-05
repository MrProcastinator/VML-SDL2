cmake_minimum_required(VERSION 3.0)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  if(DEFINED ENV{VITASDK})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "toolchain file")
  else()
    message(FATAL_ERROR "Please define VITASDK to point to your SDK path!")
  endif()
endif()

project(VMLSDL2)

include("${VITASDK}/share/vita.cmake" REQUIRED)
include(VML/VMLBuild)

# Must be provided when running
set(SFV_FOLDER "" CACHE STRING "Unity Support for Vita installation folder")
set(VML_FOLDER "" CACHE STRING "Vita Mono Loader installation folder")
set(MONO_PATH "$ENV{MONO_PATH}" CACHE STRING "Unity Support for Vita Mono library path")
set(MONO_PATH_WIN32 "${MONO_PATH}" CACHE STRING "Unity Support for Vita Mono library path (Windows format)")

# Individual library inclusion
set(INCLUDE_GFX ON CACHE BOOL "Include SD2_gfx dll generation")
set(INCLUDE_IMAGE ON CACHE BOOL "Include SD2_image dll generation")
set(INCLUDE_MIXER ON CACHE BOOL "Include SD2_mixer dll generation")
set(INCLUDE_TTF ON CACHE BOOL "Include SD2_ttf dll generation")

if("${SFV_FOLDER}" STREQUAL "")
  message(FATAL_ERROR "You must specify Unity Support for Vita installation folder by setting SFV_FOLDER")
endif()

if("${VML_FOLDER}" STREQUAL "")
  message(FATAL_ERROR "You must specify Vita Mono Loader installation folder by setting VML_FOLDER")
endif()

if("${MONO_PATH}" STREQUAL "")
  message(FATAL_ERROR "You must specify mono-xcompiler Mono folder by setting MONO_PATH")
endif()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -marm -mtune=cortex-a9 -mfpu=neon -Wno-incompatible-pointer-types -Wno-stringop-overflow -Wno-deprecated-declarations -Wl,-q -O3 -Wall")

add_subdirectory(include)
add_subdirectory(src)
