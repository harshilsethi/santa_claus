/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Wrap.h
*/

#ifndef SANTA_CLAUS_WRAP_H
#define SANTA_CLAUS_WRAP_H

#include <iostream>
#include <string>

#include "Object.h"

class Wrap : public Object
{
protected:
        bool open;
        Object *content;

public:
        Wrap();
        virtual ~Wrap();

        Object *getObject() const;
	bool isEmpty();
        virtual void wrapMeThat(Object &object) = 0;
        virtual void openMe();
        virtual void closeMe();
        static Object *MyUnitTests(Object **);
        static void displayPresendToy(std::string, std::string);
        static void cerr(std::string);
};

#endif //SANTA_CLAUS_WRAP_H