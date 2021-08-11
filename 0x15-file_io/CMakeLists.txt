cmake_minimum_required(VERSION 3.20)
project(0x15_file_io C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(0x15_file_io
        0-read_textfile.c
        main.c
        main.h)
