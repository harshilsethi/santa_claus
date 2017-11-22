//
// Created by hsethi on 11/22/17.
//

#ifndef SANTA_CLAUS_GIFTPAPER_H
#define SANTA_CLAUS_GIFTPAPER_H

#include "Wrap.h"

class GiftPaper : public Wrap
{
public:
    GiftPaper();
    virtual ~GiftPaper();

    virtual void wrapMeThat(Object *object);
};

#endif //SANTA_CLAUS_GIFTPAPER_H