/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** PapaXmasTable.cpp
*/

#include "PapaXmasTable.h"
#include "Teddy.h"

ITable *PapaXmasTable::createTable() {
	ITable *table = new PapaXmasTable();
	return table;
}

std::list<Object> PapaXmasTable::getObjects() {
	for (std::list<Object>::iterator it = objects.begin(); it != objects.end(); it++)
		std::cout << "The object " << it->getTitle() << " is on the Christmas table !" << std::endl;
	return objects;
}
