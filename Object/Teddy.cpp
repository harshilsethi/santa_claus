/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Teddy.cpp
*/

#include <iostream>
#include "Teddy.h"

bool Teddy::isTaken() const {
	std::cout << "gra hu" << std::endl;
	return Object::isTaken();
}

Teddy::Teddy(const std::string &name){
	title = name;
	type = TEDDY;
}

Teddy::~Teddy() = default;