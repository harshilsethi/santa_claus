/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** PapaXmasTable.h
*/

#ifndef PAPAXMASTABLE_H__
#define PAPAXMASTABLE_H__

#include "ITable.h"
#include "../Object/Teddy.h"
#include "../Object/LittlePony.h"
#include "../Object/Box.h"
#include "../Object/GiftPaper.h"

class PapaXmasTable : public ITable {
public:
	PapaXmasTable();
	~PapaXmasTable();

	ITable *createTable() override;
	std::list<Object> getObjects() override;
	void setObjects(std::list<Object> objects) override;
	void deleteFromTable(Object &object) override;

protected:
	std::list<Object> objects;
};

#endif /* ! PAPAXMASTABLE_H__ */