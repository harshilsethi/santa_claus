/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** IConveyorBelt.h
*/

#ifndef ICONVEYORBELT_H__
#define ICONVEYORBELT_H__

#include "Object.h"

class IConveyorBelt {
public:
	virtual IConveyorBelt *createConveyorBelt() = 0;
	virtual void inButton() = 0;
	virtual void outButton() = 0;
	virtual Object *getObject() = 0;
	virtual void setObject(Object*) = 0;
};

#endif /* ! ICONVEYORBELT_H__ */
