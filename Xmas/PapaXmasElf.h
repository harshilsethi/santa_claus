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
#include "../Object/IElf.h"

class PapaXmasElf : public IElf
{
public:
        PapaXmasElf();
        PapaXmasElf(std::string &);
        PapaXmasElf(const PapaXmasElf &);
        ~PapaXmasElf();
        ITable *getTable() const;
        IConveyorBelt *getBelt() const;
        void setTable(ITable &);
        void setBelt(IConveyorBelt &);

        void pressInButton();
        void pressOutButton();
        void putOnTable(Object &);
        void putOnBelt(Object &);
        void takeFromTable(Object &);
        void takeFromBelt(Object &);
        std::list<std::string> look();
        std::string getName() const;
        void talk(std::string &);
        void report(std::string &);

private:
        /*
          Dans le cas ou utiliser directement les interface ne fonctionne pas
	  PapaXmasTable *xmasTable;
	  PapaXmasConveyorBelt *xmasConveyorBelt;
	  TableRand *randomTable;
	  ConveyorBeltRand *randomBelt;
        */
        const std::string name;
        ITable *myTable;
        IConveyorBelt *myBelt;
};

#endif //SANTA_CLAUS_PAPAXMASELF_H