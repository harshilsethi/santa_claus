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
	LITTLEPONY,
	BOX,
	GIFTPAPER
} objectType;

class Object {
protected:
	std::string title;
	objectType type;
public:
	Object();
	virtual ~Object();
	virtual bool isTaken() const = 0;
	std::string getTitle() const;
	Object **MyUnitTests();
	Object *MyUnitTests(Object **);
	objectType getType() const;
};


#endif //SANTA_CLAUS_OBJECT_H
