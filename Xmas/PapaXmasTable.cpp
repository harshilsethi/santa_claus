/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** PapaXmasTable.cpp
*/

#include "PapaXmasTable.h"
#include "../Object/Box.h"
#include "../Object/GiftPaper.h"

PapaXmasTable::PapaXmasTable() {
	this->createTable();
};

PapaXmasTable::~PapaXmasTable() = default;

ITable *PapaXmasTable::createTable() {
	std::list<Object> objects;
	Teddy ted("Ted");
	LittlePony rainbowDash("Rainbow Dash");
	Box box;
	GiftPaper giftPaper1;
	GiftPaper giftPaper2;

	objects.push_back(rainbowDash);
	objects.push_back(ted);
	objects.push_back(box);
	objects.push_back(giftPaper1);
	objects.push_back(giftPaper2);
	this->setObjects(objects);
	return this;
}

std::list<Object> PapaXmasTable::getObjects() {
	if (objects.empty())
		std::cout << "There is no object on the table !" << std::endl;
	else {
		for (auto &object : objects) {
			if (!object.getTitle().empty())
				std::cout << "The object " << object.getTitle() << " is on the Christmas table !" << std::endl;
			else
				std::cout << "There is an object " << object.getTypeName() << " on the Christmas table !" << std::endl;
		}
	}
	return objects;
}

void PapaXmasTable::setObjects(std::list<Object> objects) {
	this->objects = std::move(objects);
}