cmake_minimum_required(VERSION 4.2)
project(TextEditor2 C)

set(CMAKE_C_STANDARD 11)

add_executable(TextEditor2 main.c
        note.c
        note.h)
