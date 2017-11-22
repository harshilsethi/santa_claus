//
// Created by hsethi on 11/22/17.
//

#include "GiftPaper.h"

GiftPaper::GiftPaper() {

}

GiftPaper::~GiftPaper() {

}

void GiftPaper::wrapMeThat(Object *object) {
    if(this->object != NULL) {
        this->object = object;
        empty = false;
    }
}