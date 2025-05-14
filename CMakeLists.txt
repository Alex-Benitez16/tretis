cmake_minimum_required(VERSION 3.16)
project(MyRaylibProject C)

# Default to Release build
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

# Add raylib subdirectory
add_subdirectory(external/raylib)

# Find all C source files
file(GLOB_RECURSE SOURCES "src/*.c")

# Define executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link raylib
target_link_libraries(${PROJECT_NAME} raylib)

# macOS-specific framework linking
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL" "-framework Cocoa" "-framework IOKit" "-framework CoreVideo")
elseif(UNIX)
    target_link_libraries(${PROJECT_NAME} m pthread dl X11)
endif()
