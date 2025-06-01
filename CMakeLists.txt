cmake_minimum_required(VERSION 3.14)
project(MunitionFactory)
set(CMAKE_CXX_STANDARD 17)

add_library(munition STATIC
    src/weapon.hpp
    src/vehicle.hpp
    src/creator.hpp
    src/munition_store.hpp
)
target_include_directories(munition PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(munition_app src/main.cpp)
target_link_libraries(munition_app PRIVATE munition)

# --- GTest section ---
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

add_executable(tests
    tests/test_weapon.cpp
    tests/test_vehicle.cpp
    tests/test_creator.cpp
    tests/test_munition_store.cpp
)
target_link_libraries(tests PRIVATE munition gtest gtest_main)
target_include_directories(tests PRIVATE src)
gtest_discover_tests(tests)
