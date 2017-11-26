//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include "RandomConeyoyBelt.h"
#include "../Object/Wrap.h"
#include "../Object/GiftPaper.h"
#include "../Object/Box.h"
#include "../Xml/Xml.h"

IConveyorBelt *RandomConeyoyBelt::createConveyorBelt() {
	IConveyorBelt *belt = new RandomConeyoyBelt();
	return belt;
}

void RandomConeyoyBelt::inButton() {
	Wrap *newObject;
	if(random() % 2)
		newObject = new GiftPaper();
	else
		newObject = new Box;
	this->objectOnbelt = newObject;
}

void RandomConeyoyBelt::outButton() {
	Object *tmp;
	std::string	gift;
	tmp = this->getObject();
	if (!tmp)
		return;
	gift = Xml::serialize(tmp);
	std::cout << gift << std::endl;
	std::cout << "Sent to santas claus" << std::endl;
	delete tmp;
}

Object *RandomConeyoyBelt::getObject() {
	if(!this->objectOnbelt)
		return nullptr;
	else
		return (objectOnbelt);}

void RandomConeyoyBelt::setObject(Object *object) {
	if(this->objectOnbelt)
		return;
	else
		this->objectOnbelt = object;
}

RandomConeyoyBelt::RandomConeyoyBelt() {
	this->objectOnbelt = nullptr;
}

RandomConeyoyBelt::~RandomConeyoyBelt() = default;