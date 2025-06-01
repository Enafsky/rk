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
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
add_executable(tests
    tests/test_weapon.cpp
    tests/test_vehicle.cpp
    tests/test_creator.cpp
    tests/test_munition_store.cpp
)
target_link_libraries(tests PRIVATE munition GTest::gtest GTest::gtest_main)
target_include_directories(tests PRIVATE src)
gtest_discover_tests(tests)
install(TARGETS munition_app RUNTIME DESTINATION bin)
include(InstallRequiredSystemLibraries)
set(CPACK_PACKAGE_NAME "munition")
set(CPACK_PACKAGE_VENDOR "Your Name")
set(CPACK_PACKAGE_CONTACT "your@email.com")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Factory Method pattern: Munition Store example")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Your Name")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.27)")
set(CPACK_RPM_PACKAGE_LICENSE "MIT")
set(CPACK_GENERATOR "DEB")
include(CPack)
