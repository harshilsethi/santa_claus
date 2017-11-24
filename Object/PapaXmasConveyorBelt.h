/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** PapaXmasConveyorBelt.h
*/

#ifndef PAPAXMASCONVEYORBELT_H__
#define PAPAXMASCONVEYORBELT_H__

#include "IConveyorBelt.h"

class PapaXmasConveyorBelt : public IConveyorBelt {

protected:
	Object *objectOnBelt;
public:
	PapaXmasConveyorBelt();
	virtual ~PapaXmasConveyorBelt();

	IConveyorBelt *createConveyorBelt() override;
	void inButton() override;
	void setObject(Object *object) override;
	void outButton() override;
	Object *getObject() override;
};

#endif /* ! PAPAXMASCONVEYORBELT_H__ */
