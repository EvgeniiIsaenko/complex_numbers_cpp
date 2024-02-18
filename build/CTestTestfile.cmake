# CMake generated Testfile for 
# Source directory: /home/evgenii/Desktop/Repositories/complex_numbers_cpp/complex_numbers_tests
# Build directory: /home/evgenii/Desktop/Repositories/complex_numbers_cpp/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/home/evgenii/Desktop/Repositories/complex_numbers_cpp/build/complex_numbers_tests[1]_include.cmake")
add_test(addition_op "complex_numbers_tests")
set_tests_properties(addition_op PROPERTIES  _BACKTRACE_TRIPLES "/home/evgenii/Desktop/Repositories/complex_numbers_cpp/complex_numbers_tests/CMakeLists.txt;6;add_test;/home/evgenii/Desktop/Repositories/complex_numbers_cpp/complex_numbers_tests/CMakeLists.txt;0;")
subdirs("googletest")
