# Enable testing
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Set the output directory for the test executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/tests)

add_executable(runTests ./test_warehouse.cc)
target_link_libraries(runTests warehouse_lib gtest gtest_main)

# Register the test with CTest
add_test(NAME WarehouseTest COMMAND runTests)