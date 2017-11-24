//
// Created by hsethi on 11/22/17.
//

#include "Wrap.h"
#include "Teddy.h"
#include "Box.h"
#include "GiftPaper.h"

Wrap::Wrap() {

}

Wrap::~Wrap() {

}

Object* Wrap::getObject() const {
    return (content);
}

void Wrap::openMe() {
    open = true;
}

void Wrap::closeMe() {
    open = false;
}

Object* Wrap::MyUnitTests(Object **bag) {
    int         size = 0;
    Teddy       *teddy = NULL;
    Box         *box = NULL;
    GiftPaper   *giftPaper = NULL;

    if(!bag) {
        std::cerr << "The bag is empty !" << std::endl;
        return (NULL);
    }
    while(bag[size++]) {
        if(size != 4) {
            std::cerr << "Cannot prepare a present with missing stuff !" << std::endl;
            return (NULL);
        }
    }
    if(size == 3 && bag[0]->getType() == TEDDY && bag[1]->getType() == BOX && bag[2]->getType() == GIFTPAPER) {
        teddy = (Teddy *) bag[0];
        box = (Box *) bag[1];
        giftPaper = (GiftPaper *) bag[2];

        box->openMe();
        box->wrapMeThat(teddy);
        box->closeMe();
        giftPaper->wrapMeThat(box);
    }

    return (giftPaper);
}