cmake_minimum_required(VERSION 3.5)

project(Übung5 LANGUAGES  CXX)

set(CMake_CXX_STANDARD 14)

add_executables(readvector io.cc statistics.cc )
add_executables(uniform io.cc statistics.cc )
add_executables(normal io.cc statistics.cc )



