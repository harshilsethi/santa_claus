//
// Created by hsethi on 11/22/17.
//

#include "Wrap.h"

Wrap::Wrap() : {

}

Wrap::~Wrap() {

}

bool Wrap::isOpen() const {
    return (open);
}

bool Wrap::isEmpty() const {
    return (empty);
}

Object *Wrap::getObject() const {
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