#
#   ____        ___
#  / ___|      / _ \ _   _  ___ _   _  ___
# | |  _ _____| | | | | | |/ _ \ | | |/ _ \
# | |_| |_____| |_| | |_| |  __/ |_| |  __/
#  \____|      \__\_\\__,_|\___|\__,_|\___|
#
# Grindelf-Queue project. Project CMakeLists file, containing project build information for CMake compiler
#
# Created by GrindelfP on 2023-10-05.
#
# README: here are defined one target QueueTest - a test executable that can be run to test the library.
#         the library by itself is not runnable, because it is not its purpose.
#
# HOW TO RUN (using Terminal on Linux or Mac OS):
#       0. make sure that you have got CMake and GNU make tools installed on your machine, if not - install them.
#           0.1.1 install CMake on MacOS:
#                                                               brew install cmake
#           0.1.2 install CMake on Linux (Ubuntu example):
#                                                               sudo apt-get -y install cmake
#           0.1.1 install GNU make on MacOS:
#                                                               brew install make
#           0.1.2 install GNU make on Linux (Ubuntu example):
#                                                               sudo apt install make
#           0.3 after previous steps check whether you have got CMake and GNU make installed:
#                                                               cmake --version
#                                                               make --version
#       1. Navigate to the required folder of your local machine using terminal or command line.
#          NB: it is common to complete following operations in the directory: your-project-directory/build
#       2. Create build files of your project using command:
#                                                               cmake ..
#       3. Build your project using command:
#                                                               make
#       4. After step 3 you will be presented with executable: QueueTest described above
#          run it with one of following command:
#                                                               ./QueueTest
#


cmake_minimum_required(VERSION 3.26)
project(grindelf_queue C)

set(CMAKE_C_STANDARD 17)

set(
        QUEUE_SOURCE_FILES
        queue/queue.h
        queue/queue.c
)

set(
        TEST_FILES
        test/test.c
        test/test.h
        test/12-initDestroy.h
        test/12-initDestroy.c
        test/56-peek.c
        test/56-peek.h
        test/34-enqueue.c
        test/34-enqueue.h
        test/78-dequeue.c
        test/78-dequeue.h
        ${QUEUE_SOURCE_FILES}
)

add_executable(
        QueueTest ${TEST_FILES}
)
