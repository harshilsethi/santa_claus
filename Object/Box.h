//
// Created by hsethi on 11/22/17.
//

#ifndef SANTA_CLAUS_BOX_H
#define SANTA_CLAUS_BOX_H

#include "Wrap.h"

class Box : public Wrap
{
private:
    bool _empty;

public:
    Box();
    ~Box();

    bool isEmpty();
};

#endif //SANTA_CLAUS_BOX_H