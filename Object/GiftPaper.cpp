//
// Created by hsethi on 11/22/17.
//

#include "GiftPaper.h"

GiftPaper::GiftPaper() {
    type = GIFTPAPER;
}

GiftPaper::~GiftPaper() = default;

void GiftPaper::wrapMeThat(Object *object) {
    if(content == nullptr) {
        content = object;
    }
}