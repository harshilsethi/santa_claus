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

void GiftPaper::wrapMeThat(Object &object) {
    if(content == nullptr) {
        content = &object;
	    if (object.getTypeName() == "box")
		    std::cout << "A box and its toy are wrapped in a gift paper !" << std::endl;
	    else
		    std::cout << "The "<< object.getTypeName() << " " << object.getTitle() << " is wrapped in a gift paper !" << std::endl;
    }
}