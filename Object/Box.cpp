//
// Created by hsethi on 11/22/17.
//

#include "Box.h"

Box::Box() {

}

Box::~Box() {

}

void Box::wrapMeThat(Object *object) {
    if(open && this->object == NULL) {
        this->object = object;
        empty = false;
    }
}