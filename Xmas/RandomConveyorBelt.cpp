//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include "RandomConveyorBelt.h"
#include "../Object/Wrap.h"
#include "../Object/GiftPaper.h"
#include "../Object/Box.h"
#include "../Xml/Xml.h"

RandomConveyorBelt::RandomConveyorBelt() {
	this->objectOnbelt = nullptr;
}

RandomConveyorBelt::~RandomConveyorBelt() = default;

IConveyorBelt *RandomConveyorBelt::createConveyorBelt() {
	IConveyorBelt *belt = new RandomConveyorBelt();
	return belt;
}

void RandomConveyorBelt::inButton() {
	Wrap *newObject;
	if(random() % 2)
		newObject = new GiftPaper();
	else
		newObject = new Box;
	this->objectOnbelt = newObject;
}

void RandomConveyorBelt::outButton() {
	Object *tmp;
	std::string	gift;
	tmp = this->getObject();
	if (!tmp)
		return;
	gift = Xml::serialize(tmp);
	std::cout << gift << std::endl;
	std::cout << "Sent to santas claus" << std::endl;
	this->objectOnbelt = nullptr;
}

Object *RandomConveyorBelt::getObject() {
	if(!this->objectOnbelt)
		return nullptr;
	else
		return (objectOnbelt);}

void RandomConveyorBelt::setObject(Object *object) {
	if(this->objectOnbelt)
		return;
	else
		this->objectOnbelt = object;
}