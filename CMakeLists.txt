cmake_minimum_required(VERSION 3.0)

project(multithread)
find_package(Threads)
add_executable(multithread src/multithread.cpp)
target_link_libraries(multithread ${CMAKE_THREAD_LIBS_INIT})