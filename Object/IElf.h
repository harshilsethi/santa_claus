//
// Created by jerome on 23/11/17.
//

#ifndef SANTA_CLAUS_IELF_H
#define SANTA_CLAUS_IELF_H

#include <string>
#include <list>
#include "Object.h"
#include "IConveyorBelt.h"

class IElf
{
public:
        virtual void pressInButton() = 0;
        virtual void pressOutButton() = 0;
        virtual void putOnTable(Object &) = 0;
        virtual void putOnBelt(Object &) = 0;
        virtual void takeFromTable(Object &) = 0;
        virtual void takeFromBelt(Object &) = 0;
        virtual std::list<std::string> look() = 0;
};

#endif //SANTA_CLAUS_IELF_H
