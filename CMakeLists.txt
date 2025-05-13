cmake_minimum_required(VERSION 3.15)
project(MyGame)
set(CMAKE_BUILD_TYPE Release)

# Include Raylib as a subproject
add_subdirectory(raylib)

# Build your game executable
add_executable(my_game src/main.c)

# Link Raylib to your executable
target_link_libraries(my_game PRIVATE raylib)

# Platform-specific settings (CMake auto-detects most)
if (WIN32)
  # Windows requires linking to Win32 libraries
  target_link_libraries(my_game PRIVATE winmm)
elseif (APPLE)
  # macOS frameworks
  find_library(COCOA_LIB Cocoa)
  find_library(IOKIT_LIB IOKit)
  target_link_libraries(my_game PRIVATE ${COCOA_LIB} ${IOKIT_LIB})
endif()
