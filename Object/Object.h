/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Object.h
*/

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
	virtual bool isTaken() const;
	std::string getTitle() const;
	Object **MyUnitTests();
	objectType getType() const;

	std::string getTypeName() const;
};

#endif //SANTA_CLAUS_OBJECT_H