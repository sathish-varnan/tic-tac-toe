cmake_minimum_required(VERSION 3.28.3)
project(tic-tac-toe)
file(GLOB_RECURSE SOURCES "../src/*.cpp")
add_executable(tic-tac-toe ${SOURCES})