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
        Santa/Xml.cpp
        Santa/Xml.h
        Xmas/IConveyorBelt.h
        Xmas/IElf.h
        Xmas/ITable.h
        Xmas/PapaXmasConveyorBelt.cpp
        Xmas/PapaXmasConveyorBelt.h
        Xmas/PapaXmasElf.cpp
        Xmas/PapaXmasElf.h
        Xmas/PapaXmasTable.cpp
        Xmas/PapaXmasTable.h
        main.cpp
        globalUnitTests.cpp
        globalUnitTests.h)

add_executable(santa_claus ${SOURCE_FILES})