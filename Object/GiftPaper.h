/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** GiftPaper.h
*/

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