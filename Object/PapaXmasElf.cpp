//
// Created by jerome on 23/11/17.
//

#include "PapaXmasElf.h"

PapaXmasElf::PapaXmasElf() : IElf()
{
}

PapaXmasElf::PapaXmasElf(const PapaXmasElf &elf)
{
        myTable = elf.myTable;
        myBelt = elf.myBelt;
}

PapaXmasElf::~PapaXmasElf()
{
}

ITable PapaXmasElf::getTable() const
{
        return (myTable);
}

IConveyorBelt PapaXmasElf::getBelt() const
{
        return (myBelt);
}

void PapaXmasElf::setTable(ITable &table)
{
        myTable = table;
}

void PapaXmasElf::setBelt(IConveyoirBelt &belt)
{
        myBelt = belt;
}

void PapaXmasElf::pressInButton()
{
        try {
                myBelt.inButton();
        }
        catch (std::string &err){
                std::cerr << err << std::endl;
        }
}

void PapaXmasElf::pressOutButton()
{
        try {
                myBelt.outButton();
        }
        catch (std::string &err){
                std::cerr << err << std::endl;
        }
}

void PapaXmasElf::putOnBelt(Object &object)
{
        Object *objectPtr = &object;
        try {
                if (myBelt.getObject == NULL)
                        myBelt.setObject(*objectPtr);
                else
                        throw "There's already an object on the conveyor belt";
        }
        catch(std::string &err){
                std::cerr << err << std::endl;
        }
}

void PapaXmasElf::putOnTable(Object &object)
{
        //list public;
}

void PapaXmasElf::takeFromBelt(Object &object)
{
        try {
                if(myBelt.getObject != NULL){
                        //Object &object utile ?
                        //ajouter un attribut objet
                        //myObjet = myBelt.getObjet;

                        myBelt.setObject(NULL);
                }else{
                        throw "There's no object on the conveyor belt.";
                }
        }
        catch (std::string &err){
                std::cerr << err << std::endl;
        }
}

void PapaXmasElf::takeFromTable(Object &object)
{

}

std::list<std::string> PapaXmasElf::look()
{
        std::list<Object> temp = myTable.getObjects;
        std::list<Object>::iterator it;
        std::list<std::string> objectList;

        for(it = temp.begin(); it != temp.end(); ++it){
                std::cout << it->getTitle() << std::endl;
                objectList.push_back(it->getTitle());
        }
        return(objectList);
}