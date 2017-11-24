/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** PapaXmasConveyorBelt.cpp
*/

#include <memory>
#include "PapaXmasConveyorBelt.h"
#include "Wrap.h"
#include "GiftPaper.h"
#include "Box.h"

IConveyorBelt *PapaXmasConveyorBelt::createConveyorBelt() {
	IConveyorBelt *belt = new PapaXmasConveyorBelt();
	return belt;
}

void PapaXmasConveyorBelt::inButton() {
	Wrap *newObject;
	if(random() % 2)
		newObject = new GiftPaper();
	else
		newObject = new Box;
	this->objectOnBelt = newObject;
}

void PapaXmasConveyorBelt::outButton() {
	this->objectOnBelt = nullptr;
}

Object *PapaXmasConveyorBelt::getObject() {
	if(!this->objectOnBelt)
		return nullptr;
	else
		return (objectOnBelt);
}

void PapaXmasConveyorBelt::setObject(Object *object) {
	if(this->objectOnBelt)
		return;
	else
		this->objectOnBelt = object;
}

PapaXmasConveyorBelt::PapaXmasConveyorBelt() {
	this->objectOnBelt = nullptr;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt() = default;