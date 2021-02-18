cmake_minimum_required(VERSION 3.19.2)

set(self factory)

project(self)

enable_testing()

add_subdirectory(googletest)

set(headers
    # operations.hpp
    engine.hpp
    frame.hpp
    tire.hpp
    car.hpp
)

set(src
    # operations.cpp
    engine.cpp
    frame.cpp
    tire.cpp
    car.cpp
)

add_library(${self} STATIC ${src} ${headers})

add_subdirectory(test)