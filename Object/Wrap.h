//
// Created by hsethi on 11/22/17.
//

#ifndef SANTA_CLAUS_WRAP_H
#define SANTA_CLAUS_WRAP_H

#include <iostream>
#include <string>

class Wrap
{
protected:
    bool open;
    bool empty;

    Object  *object;
public:
    Wrap();
    ~Wrap();

    bool isOpen();
    bool isEmpty();

    virtual void wrapMeThat(Object *object) = 0;
    virtual void openMe();
    virtual void closeMe();

};

#endif //SANTA_CLAUS_WRAP_H