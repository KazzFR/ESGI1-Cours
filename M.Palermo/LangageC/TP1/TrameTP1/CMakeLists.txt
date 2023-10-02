cmake_minimum_required(VERSION 3.26)
project(TrameTP1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(inc)
include_directories(src)

add_executable(TrameTP1
        inc/TP1.h
        src/MenuTP1.c
        src/TP1_1.c
        src/TP1_2.c
        main.c
        TrameTP1.cbp
        TrameTP1.layout)
