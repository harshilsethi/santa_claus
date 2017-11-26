//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#ifndef SANTA_CLAUS_XML_H
#define SANTA_CLAUS_XML_H


#include "../Object/Object.h"

class Xml {
protected:
	Xml();
public:
	~Xml();

	static std::string serialize(Object *object);
};


#endif //SANTA_CLAUS_XML_H
