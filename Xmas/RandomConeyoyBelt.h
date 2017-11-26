//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#ifndef SANTA_CLAUS_RANDOMCONEYOYBELT_H
#define SANTA_CLAUS_RANDOMCONEYOYBELT_H


#include "IConveyorBelt.h"

class RandomConeyoyBelt : IConveyorBelt{
public:
	RandomConeyoyBelt();

	~RandomConeyoyBelt();

	IConveyorBelt *createConveyorBelt() override;

	void inButton() override;

	void outButton() override;

	Object *getObject() override;

	void setObject(Object *object) override;

private:
	Object *objectOnbelt;
};


#endif //SANTA_CLAUS_RANDOMCONEYOYBELT_H
