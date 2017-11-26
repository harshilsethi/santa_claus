/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** GiftPaper.cpp
*/

#include "GiftPaper.h"

GiftPaper::GiftPaper() {
    title = "GiftPaper";
    type = GIFTPAPER;
}

GiftPaper::~GiftPaper() = default;

void GiftPaper::wrapMeThat(Object *object) {
    if(content == nullptr) {
        content = object;
    }
}