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

# Define the target program and its source files
add_executable("Simple-Calculator-CLI"
    src/main.cpp
)