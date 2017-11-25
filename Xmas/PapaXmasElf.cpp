//
// EPITECH PROJECT, 2017
// PapaXmasElf
// File description:
// C++ file
//

#include "PapaXmasElf.h"

PapaXmasElf::PapaXmasElf() : IElf(), name("Billy") {
}

PapaXmasElf::PapaXmasElf(std::string &aName) : IElf(), name(aName) {
}

PapaXmasElf::PapaXmasElf(const PapaXmasElf &elf) : name(elf.getName()) {
        myTable = elf.myTable;
        myBelt = elf.myBelt;
}

PapaXmasElf::~PapaXmasElf() = default;

ITable *PapaXmasElf::getTable() const {
        return (myTable);
}

IConveyorBelt *PapaXmasElf::getBelt() const {
        return (myBelt);
}

void PapaXmasElf::setTable(ITable &table) {
        myTable = &table;
}

void PapaXmasElf::setBelt(IConveyorBelt &belt) {
        myBelt = &belt;
}

void PapaXmasElf::pressInButton() {
        try {
                if(myBelt->getObject() != nullptr)
                        myBelt->inButton();
                else
                        throw getName() + ": There's already an object on the conveyor belt.";
        }
        catch (std::string &err){
                report(err);
        }
}

void PapaXmasElf::pressOutButton() {
        try {
                if(myBelt->getObject() == nullptr)
                        myBelt->outButton();
                else
                        throw getName() + ": There's no object on the conveyor belt.";
        }
        catch (std::string &err){
                std::cerr << err << std::endl;
        }
}

void PapaXmasElf::putOnBelt(Object &object) {
        Object *objectPtr = &object;
                if (myBelt->getObject() == nullptr)
                        myBelt->setObject(objectPtr);
                else
                        throw getName() + ": There's already an object on the conveyor belt";
}

void PapaXmasElf::putOnTable(Object &object) {
        std::list<Object> temp = myTable->getObjects();

                if (temp.size() < 10) {
                        std::cout << "The present is ready !" << std::endl;
                        temp.push_back(object);
                        myTable->setObjects(temp);
                }else
                        throw getName() + ": I have no more room on my table.";

}

void PapaXmasElf::takeFromBelt(Object &object) {
        try {
                if(myBelt->getObject() != nullptr){
                        putOnTable(object);
                        myBelt->setObject(nullptr);
                }else{
                        throw getName() + ": There's no object on the conveyor belt.";
                }
        }
        catch (std::string &err){
                report(err);
        }
}

void PapaXmasElf::takeFromTable(Object &object) {
        std::list<Object> temp = myTable->getObjects();
        std::list<Object>::iterator it;
        try {
                bool find = false;
                for (it = temp.begin(); it != temp.end(); ++it) {
                        if (it->getTitle() == object.getTitle() && !find) {
                                putOnBelt(*it);
                                temp.erase(it);
                                --it;
                                find = true;
                        }
                }
                if(!find)
                        throw getName() + ": I don't have this type of object on my table.";
        }
        catch(std::string &err){
                report(err);
        }

}

std::list<std::string> PapaXmasElf::look() {
        std::list<Object> temp = myTable->getObjects();
        std::list<Object>::iterator it;
        std::list<std::string> objectList;
        for(it = temp.begin(); it != temp.end(); ++it){
                std::cout << it->getTitle() << std::endl;
                objectList.push_back(it->getTitle());
        }
        return(objectList);
}


std::string PapaXmasElf::getName() const {
        return (name);
}

void PapaXmasElf::talk(std::string &line) {
        std::cout << line << std::endl;
}

void PapaXmasElf::report(std::string &line) {
        std::cerr << line << std::endl;
}