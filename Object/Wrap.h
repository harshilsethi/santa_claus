//
// Created by hsethi on 11/22/17.
//

#ifndef SANTA_CLAUS_WRAP_H
#define SANTA_CLAUS_WRAP_H

class Wrap
{
protected:
    bool _open;
public:
    Wrap();
    ~Wrap();

    bool isOpen();

    virtual void wrapMeThat(Object *object);
    virtual void openMe();
    virtual void closeMe();

};

#endif //SANTA_CLAUS_WRAP_H