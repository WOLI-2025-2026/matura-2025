cmake_minimum_required(VERSION 3.16)
project(Matura2025 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app src/main.cpp)

include(CTest)
enable_testing()

include(FetchContent)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(sample_test tests/sample_test.cpp)
target_link_libraries(sample_test gtest_main)
add_test(NAME sample_test COMMAND sample_test)

# --- Test: obecność funkcji Zadanie2_1() ---
add_executable(z2_1_source_test tests/z2_1.cpp)
target_link_libraries(z2_1_source_test gtest_main)
add_test(NAME z2_1_source_test COMMAND z2_1_source_test)

# --- Test: plik wynikowy + stdout (uruchamia skrypt) ---
add_test(NAME z2_1_golden COMMAND bash ../tests/z2_1.sh)
set_tests_properties(z2_1_golden PROPERTIES FAIL_REGULAR_EXPRESSION "ERROR|::error")
