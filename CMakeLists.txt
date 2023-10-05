cmake_minimum_required(VERSION 3.26)
project(grindelf_queue C)

set(CMAKE_C_STANDARD 17)

add_executable(grindelf_queue queueTest.c
        queue.h
        queue.c
)
