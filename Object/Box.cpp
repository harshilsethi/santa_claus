//
// Created by hsethi on 11/22/17.
//

#include "Box.h"

Box::Box() : type(BOX) {

}

Box::~Box() {

}

void Box::wrapMeThat(Object *object) {
    if(open && content == NULL) {
        content = object;
        empty = false;
        std::cout << "tuuuut tuuut tuut" << std::endl;
    }
}