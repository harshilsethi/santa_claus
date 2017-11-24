/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** PapaXmasTable.cpp
*/

#include "PapaXmasTable.h"
#include "Teddy.h"

PapaXmasTable::PapaXmasTable() {

}

PapaXmasTable::~PapaXmasTable() {

}

ITable *PapaXmasTable::createTable() {
	ITable *table = new PapaXmasTable();
	std::list<Object> objects;
	Teddy ted("Ted");
	objects.push_back(ted);
	table->setObjects(objects);
	return table;
}

std::list<Object> PapaXmasTable::getObjects() {
	if (objects.empty())
		std::cout << "There is no object on the table !" << std::endl;
	else {
		for (auto &object : objects)
			std::cout << "The object " << object.getTitle() << " is on the Christmas table !" << std::endl;
	}
	return objects;
}

void PapaXmasTable::setObjects(std::list<Object> objects) {
	this->objects = std::move(objects);
}