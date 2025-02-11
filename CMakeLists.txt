cmake_minimum_required(VERSION 3.10)

# Project name
project(WarehouseManagement)

# Use the latest C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Define the library with all sources except main
add_library(warehouse_lib STATIC
    source/Container.cc
    source/Forklift.cc
    source/Warehouse.cc
)

# Define the main executable and link the library
add_executable(warehouse source/main.cc)
target_link_libraries(warehouse warehouse_lib)

add_subdirectory(tests)
