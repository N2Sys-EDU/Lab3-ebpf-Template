cmake_minimum_required(VERSION 3.22)
project(Lab3_ebpf)

include(GoogleTest)

set(CMAKE_CXX_STANDARD 17)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(googletest EXCLUDE_FROM_ALL)
enable_testing()

include(test_utils/CMakeLists.txt)
