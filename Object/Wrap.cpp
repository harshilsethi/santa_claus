//
// Created by hsethi on 11/22/17.
//

#include "Wrap.h"

Wrap::Wrap() : {

}

Wrap::~Wrap() {

}

bool Wrap::isOpen() {
    return (open);
}

bool Wrap::isEmpty() {
    return (empty);
}

void Wrap::openMe() {
    open = true;
}

void Wrap::closeMe() {
    open = false;
}