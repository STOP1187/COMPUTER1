cmake_minimum_required(VERSION 3.20)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(COMPUTER main.cpp cpu.cpp disc.cpp gpu.cpp kbd.cpp ram.cpp
        ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/disc.h ${MY_INCLUDE_DIR}/gpu.h
        ${MY_INCLUDE_DIR}/kbd.h ${MY_INCLUDE_DIR}/ram.h)

target_include_directories(COMPUTER PUBLIC ${MY_INCLUDE_DIR})