//
// Created by jerome on 23/11/17.
//

#ifndef SANTA_CLAUS_PAPAXMASELF_H
#define SANTA_CLAUS_PAPAXMASELF_H

#include <iostream>
#include "PapaXmasTable.h"
#include "PapaXmasConveyorBelt.h"
#include "IElf.h"

class PapaXmasElf
{
public:
        PapaXmasElf();
        PapaXmasElf(const PapaXmasElf &);
        ~PapaXmasElf();
        ITable getTable() const;
        IConveyorBelt getBelt() const;
        void setTable(ITable &);
        void setBelt(IConveyoirBelt &);

        void pressInButton();
        void pressOutButton();
        void putOnTable(Object &);
        void putOnBelt(Object &);
        void takeFromTable(Object &);
        void takeFromBelt(Object &);
        std::list<std::string> look();
private:
        /*
        PapaXmasTable xmasTable;
        PapaXmasConveyorBelt xmasConveyorBelt;
        TableRand randomTable;
        ConveyorBeltRand randomBelt;
        */

        ITable myTable;
        IConveyorBelt myBelt;
        //Object myObject;
};


#endif //SANTA_CLAUS_PAPAXMASELF_H
