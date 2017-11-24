//
// Created by hsethi on 11/22/17.
//

#ifndef SANTA_CLAUS_WRAP_H
#define SANTA_CLAUS_WRAP_H

#include <iostream>
#include <string>

#include "Object.h"

class Wrap : public Object
{
protected:
    bool    open;

    Object  *content;

public:
    Wrap();
    virtual ~Wrap();

    Object  *getObject() const;

    virtual void wrapMeThat(Object *object) = 0;
    virtual void openMe();
    virtual void closeMe();

    Object *MyUnitTests(Object **);
};

#endif //SANTA_CLAUS_WRAP_H