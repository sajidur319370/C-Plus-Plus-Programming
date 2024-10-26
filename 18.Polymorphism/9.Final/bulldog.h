#ifndef BULL_DOG_H
#define BULL_DOG_H
#include "dog.h"

class BullDog : public Dog
{

public:
    BullDog();
    virtual ~BullDog();

    /* void run() const override
    {
        std::cout << "BUll Dog: Run is called" << std::endl;
    } */
};

#endif