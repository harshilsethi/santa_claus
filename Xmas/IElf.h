/*
** EPITECH PROJECT, 2017
** IElf interface
** File description:
** contain all the actions of the elves
*/

#ifndef SANTA_CLAUS_IELF_H
#define SANTA_CLAUS_IELF_H

#include <string>
#include <list>
#include "../Object/Object.h"
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
        virtual const std::string getName() const = 0;
        virtual void talk(std::string &) = 0;
        virtual void report(std::string &) = 0;
};

#endif //SANTA_CLAUS_IELF_H
