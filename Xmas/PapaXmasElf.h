/*
** EPITECH PROJECT, 2017
** PapaXmasElf
** File description:
** Header of the class
*/

#ifndef SANTA_CLAUS_PAPAXMASELF_H
#define SANTA_CLAUS_PAPAXMASELF_H

#include <iostream>
#include "PapaXmasTable.h"
#include "PapaXmasConveyorBelt.h"
#include "IElf.h"

class PapaXmasElf : public IElf
{
public:
        PapaXmasElf();
        PapaXmasElf(std::string);
        PapaXmasElf(const PapaXmasElf &);
        ~PapaXmasElf();
        ITable *getTable() const;
        IConveyorBelt *getBelt() const;
        void setTable(ITable &);
        void setBelt(IConveyorBelt &);

        void pressInButton();
        void pressOutButton();
        void takeFromTable(Object &);
        void takeFromBelt(Object &);
        std::list<std::string> look();
        std::string getName() const;
        void talk(std::string &);
        void report(std::string &);

private:
        void putOnTable(Object &);
        void putOnBelt(Object &);
        const std::string name;
        ITable *myTable;
        IConveyorBelt *myBelt;
};

#endif //SANTA_CLAUS_PAPAXMASELF_H