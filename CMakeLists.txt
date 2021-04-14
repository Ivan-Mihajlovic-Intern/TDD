cmake_minimum_required(VERSION 3.20)
project(TestDD VERSION 1.0.0)

add_library(
	point_lib
	point.hpp
	point.cpp
)

add_library(
	catch_lib
	catch.hpp
	catch.cpp
)

add_executable(point_main TestDrivenDevelopment.cpp)
add_executable(point_test tests.cpp)

target_link_libraries(point_main PRIVATE point_lib)
target_link_libraries(point_test PRIVATE catch_lib)