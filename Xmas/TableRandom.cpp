//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include "TableRandom.h"
#include "../Object/LittlePony.h"
#include "../Object/Teddy.h"
#include "../Object/GiftPaper.h"
#include "../Object/Box.h"

ITable *TableRandom::createTable() {
	int random;
	for(int i = 0; i < 10; i++){
		random = (int)random() % 4;
		switch (random){
			case 0:
				objects.push_back(Teddy("randomTeddy"));
			case 1:
				objects.push_back(LittlePony("randomLittlePony"));
			case 2:
				objects.push_back(Box());
			case 3:
				objects.push_back(GiftPaper());
		}
		this->setObjects(objects);
	}
	return this;
}

std::list<Object> TableRandom::getObjects() {
	return (this->objects);
}

void TableRandom::setObjects(std::list<Object> objects) {
	this->objects = objects;
}
