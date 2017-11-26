//
// EPITECH PROJECT, 2017
// PapaXmasElf
// File description:
// C++ file
//

#include "PapaXmasElf.h"

PapaXmasElf::PapaXmasElf() : IElf(), name("Billy") {
	myTable = nullptr;
	myBelt = nullptr;
	std::string sentence = "Elf " + name + " ready to prepare gifts !";
	this->talk(sentence);
}


PapaXmasElf::PapaXmasElf(std::string aName) : IElf(), name(aName) {
	myTable = nullptr;
	myBelt = nullptr;
	std::string sentence = "Elf " + name + " ready to prepare gifts !";
	this->talk(sentence);
}

PapaXmasElf::PapaXmasElf(const PapaXmasElf &elf) : IElf(), name(elf.getName()) {
	myTable = elf.myTable;
	myBelt = elf.myBelt;
	std::string sentence = "Elf " + name + " ready to prepare gifts !";
	this->talk(sentence);
}

PapaXmasElf::~PapaXmasElf() {
	std::string lastSentence = name + ": My job is finished, Merry Christmas ! ";
	this->talk(lastSentence);
};

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
		if (myBelt == nullptr){
			throw std::string(getName() + ": I don't have a conveyor belt.");
		}
		if(myBelt->getObject() == nullptr) {
			myBelt->inButton();
			talk(getName() + ": there is now a " + myBelt->getObject()->getTitle() + " on the conveyor belt");
		} else {
			throw std::string(getName() + ": There's already an object on the conveyor belt.");
		}
	}
	catch (std::string &err){
		report(err);
	}
}

void PapaXmasElf::pressOutButton() {
	try {
		if (myBelt == nullptr){
			throw std::string(getName() + ": I don't have a conveyor belt.");
		}
		if(myBelt->getObject() != nullptr)
			myBelt->outButton();
		else
			throw std::string(getName() + ": There's no object on the conveyor belt.");
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
		throw std::string(getName() + ": There's already an object on the conveyor belt");
}

void PapaXmasElf::putOnTable(Object &object) {
	std::list<Object> temp = myTable->getObjects();

	if (temp.size() < 10) {
		std::cout << "The present is ready !" << std::endl;
		temp.push_back(object);
		myTable->setObjects(temp);
	}else
		throw std::string(getName() + ": I have no more room on my table.");

}

void PapaXmasElf::takeFromBelt() {
	Object object = *myBelt->getObject();
	try {
		if(myBelt->getObject() != nullptr){
			myBelt->getObject();
			object.isTaken();
			putOnTable(object);
			delete myBelt->getObject();
		}else{
			throw std::string(getName() + ": There's no object on the conveyor belt.");
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
				object.isTaken();
				putOnBelt(*it);
				temp.erase(it);
				--it;
				find = true;
			}
		}
		if(!find)
			throw std::string(getName() + ": I don't have this type of object on my table.");
	}
	catch(std::string &err){
		report(err);
	}

}

std::list<std::string> PapaXmasElf::look() {
	std::list<Object> temp;
	std::list<std::string> objectList;
	try {
		if (myTable != nullptr) {
			temp = myTable->getObjects();
			std::string firstMsg = this->getName() + ": What's on this table...?";

			std::cout << "---" << std::endl;
			talk(firstMsg);
			if (temp.empty())
				std::cout << "There is no object on the table !" << std::endl;
			else {
				for (auto &object : temp) {
					if (!object.getTitle().empty())
						std::cout << "The object " << object.getTitle() << " is on the Christmas table !" << std::endl;
					else
						std::cout << "There is an object " << object.getTypeName() << " on the Christmas table !" << std::endl;
					objectList.push_back(object.getTitle());
				}
			}
			std::cout << "---" << std::endl;
		} else
			throw std::string(getName() + ": I don't have a table");
	}
	catch (std::string &err){
		report(err);
	}
	return (objectList);
}

std::string PapaXmasElf::getName() const {
	return (name);
}

void PapaXmasElf::talk(const std::string &line) {
	std::cout << line << std::endl;
}

void PapaXmasElf::report(const std::string &line) {
	std::cerr << line << std::endl;
}