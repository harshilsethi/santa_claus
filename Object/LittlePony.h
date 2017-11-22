//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#ifndef SANTA_CLAUS_LITTILEPONY_H
#define SANTA_CLAUS_LITTILEPONY_H


#include "Toy.h"

class LittlePony : public Toy {
public:
	LittlePony(const std::string &name);

	bool isTaken() const override;

	virtual ~LittlePony();

};



#endif //SANTA_CLAUS_LITTILEPONY_H
