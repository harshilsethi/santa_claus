/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** ITable.h
*/

#ifndef ITABLE_H__
#define ITABLE_H__

#include "Object.h"
#include <list>
#include <iostream>

class ITable {
public:
	virtual ITable *createTable() = 0;
	virtual std::list<Object> getObjects() = 0;

};

#endif /* ! ITABLE_H__ */