//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#include <iostream>
#include "Teddy.h"

bool Teddy::isTaken() const {
	std::cout << "gra hu" << std::endl;
	Object::isTaken();
}

Teddy::Teddy(const std::string &name){
	title = name;
	type = TEDDY;
}

Teddy::~Teddy() = default;