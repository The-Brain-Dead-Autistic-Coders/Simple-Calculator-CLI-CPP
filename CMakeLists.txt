cmake_minimum_required(VERSION 3.10)
project("SimpleCalculatorCLI" CXX)

# Force C++17 across all platforms
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Apply proper warning flags depending on the compiler (MSVC vs. GCC/Clang)
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra)
endif()

# 1. Tell CMake to build the library from the submodule folder
add_subdirectory(external/libclirenderer/)

# Define the target program and its source files
add_executable("Simple-Calculator-CLI"
    src/main.cpp
)

# 2. Link the library target to your calculator executable
target_link_libraries("Simple-Calculator-CLI" PRIVATE libclirenderer)