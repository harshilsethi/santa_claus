/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Wrap.cpp
*/

#include "Wrap.h"
#include "Teddy.h"
#include "LittlePony.h"
#include "Box.h"
#include "GiftPaper.h"

Wrap::Wrap() = default;

Wrap::~Wrap() = default;

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
        int size = 0;

        bool bTeddy = false;
        bool bLittlePony = false;
        bool bBox = false;
        bool bGiftPaper = false;

        Teddy       teddy("");
        Teddy       &myTeddy = teddy;
        LittlePony  littlePony("");
        LittlePony  &myLittlePony = littlePony;
        Box         box;
        Box         &myBox = box;
        GiftPaper   giftPaper;
        GiftPaper   &myGiftPaper = giftPaper;

        if(!bag) {
                std::cerr << "The bag is empty !" << std::endl;
                return (nullptr);
        }
        while(bag[size]) {
                size++;
        }
        if(size != 3) {
                std::cerr << "Cannot prepare a present with missing stuff !" << std::endl;
                return (nullptr);
        }
        for(int i = 0; i < 3; i++) {
                switch(bag[i]->getType()) {
                        case TEDDY :
                                myTeddy = dynamic_cast<Teddy&>(*bag[i]);
                                bTeddy = true;
                                break;
                        case LITTLEPONY :
                                myLittlePony = dynamic_cast<LittlePony&>(*bag[i]);
                                bLittlePony = true;
                                break;
                        case BOX :
                                myBox = dynamic_cast<Box&>(*bag[i]);
                                bBox = true;
                                break;
                        case GIFTPAPER :
                                myGiftPaper = dynamic_cast<GiftPaper&>(*bag[i]);
                                bGiftPaper = true;
                                break;
                }
        }
        if(bBox && bGiftPaper && (bTeddy || bLittlePony)) {
                myBox.openMe();
                myBox.wrapMeThat(&myTeddy);
                myBox.closeMe();
                myGiftPaper.wrapMeThat(&myBox);
                if(bTeddy)
                        displayPresendToy("Teddy", myTeddy.getTitle());
                if(bLittlePony)
                        displayPresendToy("LittlePony", myLittlePony.getTitle());
        } else {
                std::cerr << "Cannot prepare a present with missing stuff !" << std::endl;
                return (nullptr);
        }
        return (&myGiftPaper);
}

void Wrap::displayPresendToy(std::string toy, std::string title) {
        std::cout << "The present " << toy <<  " : '" << title << "' is ready !" << std::endl;
}