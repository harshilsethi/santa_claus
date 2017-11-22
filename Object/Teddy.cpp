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
	return _isTaken;
}

Teddy::Teddy(const std::string &name) :_name(name), objectType(TEDDY) {}

Teddy::~Teddy() = default;