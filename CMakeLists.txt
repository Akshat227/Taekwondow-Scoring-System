cmake_minimum_required(VERSION 3.5)
project(tokka CXX)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SFML (make sure it's installed system-wide or set CMAKE_PREFIX_PATH)
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Your executable
add_executable(tokka main.cpp)

# Link SFML libs
target_link_libraries(tokka sfml-graphics sfml-window sfml-system)
