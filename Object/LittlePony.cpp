//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include <iostream>
#include "LittlePony.h"

bool LittlePony::isTaken() const {
	std::cout << "yo man" << std::endl;
	return Object::isTaken();
}

LittlePony::LittlePony(const std::string &name){
	title = name;
	type = LITTLEPONY;
}

LittlePony::~LittlePony() = default ;

