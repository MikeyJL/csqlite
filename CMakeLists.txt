cmake_minimum_required(VERSION 3.10)

project(csqlite C)

file(GLOB SOURCES "src/*.c")

include_directories(include)

add_executable(main ${SOURCES})
