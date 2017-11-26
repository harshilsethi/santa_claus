/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Object.cpp
*/

#include <iostream>
#include "Object.h"
#include "LittlePony.h"
#include "Teddy.h"

Object::Object() {
}

Object::~Object() = default;

objectType Object::getType() const {
	return (type);
}

std::string Object::getTypeName() const {
	std::string result;
	switch (this->getType()) {
		case objectType::BOX:
			result = "box";
			break;
		case objectType::GIFTPAPER:
			result =  "gift paper";
			break;
		case objectType::LITTLEPONY:
			result = "little pony";
			break;
		case objectType::TEDDY:
			result = "teddy";
			break;
	}
	return result;
}

std::string Object::getTitle() const {
	return (title);
}

bool Object::isTaken() const {
	return false;
}

Object** Object::MyUnitTests() {
	Object **pObject = new Object*[1];
	pObject[0] = new LittlePony("happy pony");
	pObject[1] = new Teddy("cuddles");
	return pObject;
}