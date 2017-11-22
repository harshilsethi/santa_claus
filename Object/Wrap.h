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
    bool open;
    bool empty;

    Object  *content;

public:
    Wrap();
    virtual ~Wrap();

    bool    isOpen() const;
    bool    isEmpty() const;
    Object  *getObject() const;

    virtual void wrapMeThat(Object *object) = 0;
    virtual void openMe();
    virtual void closeMe();

    bool isTaken() const override;
};

#endif //SANTA_CLAUS_WRAP_H