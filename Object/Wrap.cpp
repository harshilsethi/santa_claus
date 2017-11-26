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

Wrap::Wrap() : Object() {
}

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
                cerr("The bag is empty !");
                return (nullptr);
        }
        while(bag[size]) {
                size++;
        }
        size--;
        if(size != 3) {
                cerr("Cannot prepare a present with missing stuff !");
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
                if(bTeddy) {
                        displayPresendToy("Teddy", myTeddy.getTitle());
                        myBox.wrapMeThat(myTeddy);
                }
                if(bLittlePony) {
                        displayPresendToy("LittlePony", myLittlePony.getTitle());
                        myBox.wrapMeThat(myLittlePony);
                }
                myBox.closeMe();
                myGiftPaper.wrapMeThat(myBox);
        } else {
                cerr("Cannot prepare a present with missing stuff !");
                return (nullptr);
        }
        return (&myGiftPaper);
}

void Wrap::displayPresendToy(std::string toy, std::string title) {
        std::cout << "The present " << toy <<  " : '" << title << "' is ready !" << std::endl;
}

void Wrap::cerr(std::string message) {
        std::cerr << message << std::endl;
}

bool Wrap::isEmpty() {
        if(!this->content)
                return true;
        return false;
}