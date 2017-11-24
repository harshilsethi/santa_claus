cmake_minimum_required(VERSION 3.8)
project(santa_claus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Object/Box.cpp
        Object/Box.h
        Object/GiftPaper.cpp
        Object/GiftPaper.h
        Object/IElf.h
        Object/ITable.h
        Object/IConveyorBelt.h
        Object/LittlePony.cpp
        Object/LittlePony.h
        Object/Object.cpp
        Object/Object.h
        Object/PapaXmasTable.cpp
        Object/PapaXmasTable.h
        Object/PapaXmasConveyorBelt.cpp
        Object/PapaXmasConveyorBelt.h
        Object/Teddy.cpp
        Object/Teddy.h
        Object/Toy.cpp
        Object/Toy.h
        Object/IElf.h
        Object/PapaXmasElf.cpp
        Object/PapaXmasElf.h
        Object/Wrap.cpp
        Object/Wrap.h
        main.cpp)

add_executable(santa_claus ${SOURCE_FILES})