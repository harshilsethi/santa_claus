//
// EPITECH PROJECT, 2017
// 
// File description:
//
//

#ifndef SANTA_CLAUS_OBJECT_H
#define SANTA_CLAUS_OBJECT_H

#include <string>

typedef enum {
	TEDDY,
	LITTLEPONY
} objectType;

class Object {
protected:
	std::string _name;
	objectType _type;
	bool _isTaken;
public:
	virtual ~Object();
	Object();
	virtual bool isTaken() const = 0;
	Object **MyUnitTests();
};


#endif //SANTA_CLAUS_OBJECT_H
