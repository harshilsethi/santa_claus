//
// Created by hsethi on 11/22/17.
//

#include "Box.h"

Box::Box() {
    type = BOX;
}

Box::~Box() {

}

bool Box::isOpen() {
    return (open);
}

void Box::wrapMeThat(Object *object) {
    if(open && content == NULL) {
        content = object;
        std::cout << "tuuuut tuuut tuut" << std::endl;
    }
}