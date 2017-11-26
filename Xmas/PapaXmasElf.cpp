//
// EPITECH PROJECT, 2017
// PapaXmasElf
// File description:
// C++ file
//

#include "PapaXmasElf.h"

PapaXmasElf::PapaXmasElf() : IElf(), name("Billy") {
	std::string sentence = "Elf " + name + " ready to prepare gifts !";
	this->talk(sentence);
}


PapaXmasElf::PapaXmasElf(std::string aName) : IElf(), name(aName) {
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
			object.isTaken();
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
				object.isTaken();
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
	std::list<std::string> objectList;
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
	return (objectList);
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