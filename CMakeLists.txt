cmake_minimum_required(VERSION 3.16)

# Project name
project(sandbox2d)

# Default build type set to Debug
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

message("Build type set to: ${CMAKE_BUILD_TYPE}")

###############
# C++ Options #
###############
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the output directory for built objects.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")



# Set include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add all main project source files here
file(GLOB SRC src/*cpp)


# Set external libraries
add_subdirectory(external/SDL EXCLUDE_FROM_ALL)
add_subdirectory(external/SDL_ttf EXCLUDE_FROM_ALL)

set(SDLIMAGE_VENDORED ON)
set(SDLIMAGE_ANI OFF) # Settings for supported image formats, enable as needed to minimize compile time
set(SDLIMAGE_AVIF OFF)
set(SDLIMAGE_BMP ON)
set(SDLIMAGE_GIF ON)
set(SDLIMAGE_JPG ON)
set(SDLIMAGE_JXL OFF)
set(SDLIMAGE_LBM OFF)
set(SDLIMAGE_PCX OFF)
set(SDLIMAGE_PNG ON)
set(SDLIMAGE_PNM OFF)
set(SDLIMAGE_QOI OFF)
set(SDLIMAGE_SVG OFF)
set(SDLIMAGE_TGA OFF)
set(SDLIMAGE_TIF OFF)
set(SDLIMAGE_WEBP OFF)
set(SDLIMAGE_XCF OFF)
set(SDLIMAGE_XPM OFF)
set(SDLIMAGE_XV OFF)
set(SDLIMAGE_PNG_LIBPNG OFF)
add_subdirectory(external/SDL_image EXCLUDE_FROM_ALL)

set(SDLMIXER_VENDORED ON)
set(SDLMIXER_AIFF OFF) # Settings for supported audio formats, enable as needed to minimize compile time
set(SDLMIXER_WAVE ON)
set(SDLMIXER_VOC OFF)
set(SDLMIXER_AU OFF)
set(SDLMIXER_FLAC OFF)
set(SDLMIXER_GME OFF)
set(SDLMIXER_MOD OFF)
set(SDLMIXER_MP3 ON)
set(SDLMIXER_MIDI ON)
set(SDLMIXER_OPUS OFF)
set(SDLMIXER_VORBIS_STB OFF)
set(SDLMIXER_VORBIS_VORBISFILE OFF)
set(SDLMIXER_VORBIS_TREMOR OFF)
set(SDLMIXER_WAVPACK OFF)
add_subdirectory(external/SDL_mixer EXCLUDE_FROM_ALL)

add_subdirectory(external/SDL_net EXCLUDE_FROM_ALL)

set(SDL_LIBS SDL3_ttf::SDL3_ttf SDL3_image::SDL3_image SDL3_mixer::SDL3_mixer SDL3_net::SDL3_net SDL3::SDL3)


# Create Main Executable
add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)
target_sources(${CMAKE_PROJECT_NAME} PRIVATE ${SRC})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${SDL_LIBS})



