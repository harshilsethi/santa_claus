//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#ifndef SANTA_CLAUS_TABLERANDOM_H
#define SANTA_CLAUS_TABLERANDOM_H


#include "ITable.h"

class TableRandom : ITable{
public:
private:
	ITable *createTable() override;

	std::list<Object> getObjects() override;

	void setObjects(std::list<Object> objects) override;

private:
	std::list<Object> objects;
};


#endif //SANTA_CLAUS_TABLERANDOM_H
