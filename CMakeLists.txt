cmake_minimum_required(VERSION 3.8)
project(santa_claus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Object/Box.cpp
        Object/Box.h
        Object/GiftPaper.cpp
        Object/GiftPaper.h
        Object/LittlePony.cpp
        Object/LittlePony.h
        Object/Object.cpp
        Object/Object.h
        Object/Teddy.cpp
        Object/Teddy.h
        Object/Toy.cpp
        Object/Toy.h
        Object/Wrap.cpp
        Object/Wrap.h
        main.cpp)

add_executable(santa_claus ${SOURCE_FILES})