/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Box.h
*/
#ifndef SANTA_CLAUS_BOX_H
#define SANTA_CLAUS_BOX_H

#include "Wrap.h"

class Box : public Wrap
{
public:
	Box();
	virtual ~Box();

	bool isOpen();
	virtual void wrapMeThat(Object *object);
};

#endif //SANTA_CLAUS_BOX_H