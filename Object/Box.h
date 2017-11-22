//
// Created by hsethi on 11/22/17.
//

#ifndef SANTA_CLAUS_BOX_H
#define SANTA_CLAUS_BOX_H

#include "Wrap.h"

class Box : public Wrap
{
public:
    Box();
    ~Box();

    virtual void wrapMeThat(Object *object);
};

#endif //SANTA_CLAUS_BOX_H