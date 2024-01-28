cmake_minimum_required(VERSION 3.27)
project(basic_calc C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(basic_calc
        main.c
        src.h)
target_link_libraries(basic_calc m)