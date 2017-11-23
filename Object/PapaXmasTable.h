/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** PapaXmasTable.h
*/

#ifndef PAPAXMASTABLE_H__
#define PAPAXMASTABLE_H__

#include "ITable.h"

class PapaXmasTable : public ITable {
public:
	ITable *createTable() override;
	std::list<Object> getObjects() override;

protected:
	std::list<Object> objects;
};

#endif /* ! PAPAXMASTABLE_H__ */
