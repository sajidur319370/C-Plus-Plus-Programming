#include <iostream>
#include "animal.h"
#include "feline.h"
#include "dog.h"

int main()
{

    Animal *p_animal = new Dog;
    delete p_animal;

    return 0;
}