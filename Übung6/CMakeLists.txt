cmake_minimum_required(VERSION 3.5)

project(Übung6 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 14)
add_library(essentials point.cc)

add_executable(polygon polygon.cc)
add_executable(canvas canvas.cc)
target_link_libraries(polygon PUBLIC essentials)
target_link_libraries(canvas PUBLIC essentials)
enable_testing()


