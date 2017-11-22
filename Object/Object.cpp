//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include "Object.h"
#include "LittlePony.h"
#include "Teddy.h"

Object::Object() {
}

Object::~Object() = default;

objectType Object::getType() const {
	return (type);
}

std::string Object::getTitle() const {
	return (title);
}

bool Object::isTaken() const {
	return false;
}

Object** Object::MyUnitTests() {
	Object **pObject;
	pObject[0] = new LittlePony("happy pony");
	pObject[1] = new Teddy("cuddles");
	return pObject;
}

Object** Object::MyUnitTests(Object **) {
	return nullptr;
}