//
// Created by hsethi on 11/22/17.
//

#include "Wrap.h"
#include "Box.h"
#include "GiftPaper.h"

Wrap::Wrap() {

}

Wrap::~Wrap() {

}

bool Wrap::isOpen() const {
    return (open);
}

bool Wrap::isEmpty() const {
    return (empty);
}

Object* Wrap::getObject() const {
    return (content);
}

void Wrap::openMe() {
    open = true;
    if(isTaken()) {
        empty = true;
        content = NULL;
    }
}

void Wrap::closeMe() {
    open = false;
}

bool Wrap::isTaken() const {
    std::cout << "whistles while working" << std::endl;
    return (Object::isTaken());
}
/*
Object* Wrap::MyUnitTests(Object **object) {

    try {
        Box box;
        Object &myBox = box;
        GiftPaper giftPaper;
        Box *test = static_cast<Box*&>(box).wrapMeThat(object[0]);
        dynamic_cast<Box&>(box).wrapMeThat(object[0]);
        dynamic_cast<GiftPaper&>(giftPaper).wrapMeThat(object[1]);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return (object[2]);
}
 */