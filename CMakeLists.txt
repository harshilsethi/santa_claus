cmake_minimum_required(VERSION 3.8)
project(santa_claus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Object/Box.cpp
        Object/GiftPaper.cpp
        Object/LittlePony.cpp
        Object/LittlePony.h
        Object/Object.cpp
        Object/Object.h
        Object/Teddy.cpp
        Object/Teddy.h
        Object/Toy.cpp
        Object/Toy.h
        Object/Wrap.cpp
        main.cpp Object/ITable.h Object/IConveyorBelt.h Object/PapaXmasTable.cpp Object/PapaXmasTable.h Object/PapaXmasConveyorBelt.cpp Object/PapaXmasConveyorBelt.h)

add_executable(santa_claus ${SOURCE_FILES})