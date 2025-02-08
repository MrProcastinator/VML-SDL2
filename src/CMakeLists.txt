# Enable asm for AOT library support
enable_language(ASM)

project(src)

if("${CMAKE_BUILD_TYPE}" STREQUAL "DEBUG")
  set(MONO_RELEASE_TYPE debug)
else()
  set(MONO_RELEASE_TYPE optimize)
endif()

set(LIBRARY_NAME SDL2)
compile_mono_single_assembly_aot(
  CODE_FILE ${LIBRARY_NAME}
  FLAGS unsafe ${MONO_RELEASE_TYPE}
)
add_library(VML${LIBRARY_NAME} STATIC
  ${LIBRARY_NAME}.c
  ${LIBRARY_NAME}.dll.s
)

set(LIBRARY_NAME SDL2_ttf)
compile_mono_single_assembly_aot(
  CODE_FILE ${LIBRARY_NAME}
  REFERENCES SDL2.dll
  FLAGS unsafe ${MONO_RELEASE_TYPE}
)
add_library(VML${LIBRARY_NAME} STATIC
  ${LIBRARY_NAME}.c
  ${LIBRARY_NAME}.dll.s
)
add_dependencies(VML${LIBRARY_NAME} VMLSDL2)

set(LIBRARY_NAME SDL2_mixer)
compile_mono_single_assembly_aot(
  CODE_FILE ${LIBRARY_NAME}
  REFERENCES SDL2.dll
  FLAGS unsafe ${MONO_RELEASE_TYPE}
)
add_library(VML${LIBRARY_NAME} STATIC
  ${LIBRARY_NAME}.c
  ${LIBRARY_NAME}.dll.s
)
add_dependencies(VML${LIBRARY_NAME} VMLSDL2)

set(LIBRARY_NAME SDL2_image)
compile_mono_single_assembly_aot(
  CODE_FILE ${LIBRARY_NAME}
  REFERENCES SDL2.dll
  FLAGS unsafe ${MONO_RELEASE_TYPE}
)
add_library(VML${LIBRARY_NAME} STATIC
  ${LIBRARY_NAME}.c
  ${LIBRARY_NAME}.dll.s
)
add_dependencies(VML${LIBRARY_NAME} VMLSDL2)

set(LIBRARY_NAME SDL2_gfx)
compile_mono_single_assembly_aot(
  CODE_FILE ${LIBRARY_NAME}
  REFERENCES SDL2.dll
  FLAGS unsafe ${MONO_RELEASE_TYPE}
)
add_library(VML${LIBRARY_NAME} STATIC
  ${LIBRARY_NAME}.c
  ${LIBRARY_NAME}.dll.s
)
add_dependencies(VML${LIBRARY_NAME} VMLSDL2)

install(
  TARGETS VMLSDL2 VMLSDL2_image VMLSDL2_ttf VMLSDL2_gfx VMLSDL2_mixer
  DESTINATION lib
)

install(
  FILES 
    ${CMAKE_BINARY_DIR}/SDL2.dll 
    ${CMAKE_BINARY_DIR}/SDL2_image.dll
    ${CMAKE_BINARY_DIR}/SDL2_ttf.dll
    ${CMAKE_BINARY_DIR}/SDL2_gfx.dll
    ${CMAKE_BINARY_DIR}/SDL2_mixer.dll
  DESTINATION lib/mono
)
