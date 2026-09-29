# Test files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

# Target testing include files
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Base SDL
add_executable(test_sdl src/test_sdl.cpp)
target_sources(test_sdl PRIVATE src/test_include.cpp)
target_link_libraries(test_sdl PRIVATE ${SDL_LIBS})

# SDL_ttf
add_executable(test_sdl_ttf src/test_sdl_ttf.cpp)
target_link_libraries(test_sdl_ttf PRIVATE ${SDL_LIBS})

# SDL_image
add_executable(test_sdl_image src/test_sdl_image.cpp)
target_link_libraries(test_sdl_image PRIVATE ${SDL_LIBS})

# SDL_mixer
add_executable(test_sdl_mixer src/test_sdl_mixer.cpp)
target_link_libraries(test_sdl_mixer PRIVATE ${SDL_LIBS})

# SDL_net
add_executable(test_sdl_net src/test_sdl_net.cpp)
target_link_libraries(test_sdl_net PRIVATE ${SDL_LIBS})