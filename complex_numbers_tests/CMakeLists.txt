cmake_minimum_required(VERSION 3.12) # version can be different

project(complex_numbers_tests) #name of your project
include(CTest)
enable_testing()
add_test(addition_op complex_numbers_tests)
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} DEPENDS complex_numbers_tests)

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(complex_numbers_tests complex_numbers_tests.cc) # add this executable

target_link_libraries(complex_numbers_tests PRIVATE gtest) # link google test to this executable

include(GoogleTest)
gtest_discover_tests(complex_numbers_tests) # discovers tests by asking the compiled test executable to enumerate its tests
