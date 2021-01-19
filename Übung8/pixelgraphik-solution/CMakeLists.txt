cmake_minimum_required(VERSION 3.5)

project(pixelgraphik-solution LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
enable_testing()

add_executable(testcorners testcorners.cc point.cc)
add_test(testcorners testcorners)

add_library(pgm pgm.cc)

add_executable(plot main.cc point.cc)
target_link_libraries(plot PUBLIC pgm)
