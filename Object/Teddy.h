/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Teddy.h
*/

#ifndef SANTA_CLAUS_TEDDY_H
#define SANTA_CLAUS_TEDDY_H

#include "Toy.h"

class Teddy : public Toy{
public:
	Teddy(const std::string &name);
	~Teddy();

	bool isTaken() const override;
};

#endif //SANTA_CLAUS_TEDDY_H