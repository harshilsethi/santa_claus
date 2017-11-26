cmake_minimum_required(VERSION 3.8)
project(santa_claus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Object/Box.cpp
        Object/Box.h
        Object/GiftPaper.cpp
        Object/GiftPaper.h
        Xmas/IElf.h
        Xmas/ITable.h
        Xmas/IConveyorBelt.h
        Object/LittlePony.cpp
        Object/LittlePony.h
        Object/Object.cpp
        Object/Object.h
        Xmas/PapaXmasTable.cpp
        Xmas/PapaXmasTable.h
        Xmas/PapaXmasConveyorBelt.cpp
        Xmas/PapaXmasConveyorBelt.h
        Object/Teddy.cpp
        Object/Teddy.h
        Object/Toy.cpp
        Object/Toy.h
        Xmas/IElf.h
        Xmas/PapaXmasElf.cpp
        Xmas/PapaXmasElf.h
        Object/Wrap.cpp
        Object/Wrap.h
        main.cpp
        globalUnitTests.cpp
        globalUnitTests.h)

add_executable(santa_claus ${SOURCE_FILES})