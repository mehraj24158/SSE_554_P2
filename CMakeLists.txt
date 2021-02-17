cmake_minimum_required(VERSION 3.19.2)

set(self factory)

project(self)

enable_testing()

add_subdirectory(googletest)

set(headers
    operations.hpp
)

set(src
    operations.cpp
)

add_library(${self} STATIC ${src} ${headers})

add_subdirectory(test)