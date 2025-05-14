cmake_minimum_required(VERSION 3.16)
project(MyRaylibProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add raylib as subdirectory
add_subdirectory(external/raylib)

# Define your source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add executable target
add_executable(${PROJECT_NAME} ${SOURCES})

# Link raylib and its dependencies (raylib pulls them in via find_package)
target_link_libraries(${PROJECT_NAME} raylib)

# Optional: Set platform-specific flags
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL" "-framework Cocoa" "-framework IOKit" "-framework CoreVideo")
elseif(UNIX)
    target_link_libraries(${PROJECT_NAME} m pthread dl X11)
endif()
