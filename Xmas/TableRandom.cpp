//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include <ctime>
#include "TableRandom.h"
#include "../Object/LittlePony.h"
#include "../Object/Teddy.h"
#include "../Object/GiftPaper.h"
#include "../Object/Box.h"

ITable *TableRandom::createTable() {
	int random;
	std::list<Object> _objects;
	Teddy ted("Ted");
	LittlePony rainbowDash("Rainbow Dash");
	Box box;
	GiftPaper giftPaper1;

	std::srand(std::time(0));
	for (int i = 0; i < 10; i++) {
		random = (int) (std::rand() % 4);
		if (random == 0)
			_objects.push_back(rainbowDash);
		if (random == 1)
			_objects.push_back(ted);
		if (random == 2)
			_objects.push_back(box);
		if (random == 3)
			_objects.push_back(giftPaper1);
	}
	this->setObjects(_objects);
	return this;
}

std::list<Object> TableRandom::getObjects() {
	return (this->objects);
}

void TableRandom::setObjects(std::list<Object> objects) {
	this->objects = objects;
}
