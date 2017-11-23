//
// Created by hsethi on 11/22/17.
//

#include "GiftPaper.h"

GiftPaper::GiftPaper() {
    type = (GIFTPAPER);
}

GiftPaper::~GiftPaper() {

}

void GiftPaper::wrapMeThat(Object *object) {
    if(content != NULL) {
        content = object;
        empty = false;
        std::cout << "tuuuut tuuut tuut" << std::endl;
    }
}