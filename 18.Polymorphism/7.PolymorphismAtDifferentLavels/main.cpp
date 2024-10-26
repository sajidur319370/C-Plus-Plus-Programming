#include <iostream>
#include "animal.h"
#include "feline.h"
#include "bird.h"
#include "dog.h"
#include "cat.h"
#include "pigeon.h"
#include "crow.h"

int main()
{
    std::cout << "===========================================" << std::endl;
    std::cout << "Animal Polymorphism" << std::endl;
    std::cout << "===========================================" << std::endl;
    Dog dog1("Dark gray", "dog1");
    Cat cat1("Blackstrip", "cat1");
    Pigeon pigeon1("White", "pigeon1");
    Crow crow1("Black", "crow1");
    Animal *animals[]{&dog1, &cat1, &pigeon1, &crow1};
    for (const auto &animal : animals)
    {
        animal->breathe();
    }
    std::cout << "===========================================" << std::endl;
    std::cout << "Feline Polymorphism" << std::endl;
    std::cout << "===========================================" << std::endl;

    Dog dog2("Dark gray", "dog2");
    Cat cat2("Blackstrip", "cat2");

    Feline *felines[]{&dog2, &cat2};

    for (const auto &feline : felines)
    {
        feline->run();
    }
    std::cout << "===========================================" << std::endl;
    std::cout << "Bird Polymorphism" << std::endl;
    std::cout << "===========================================" << std::endl;
    Pigeon pigeon2("White", "pigeon2");
    Crow crow2("Black", "crow2");
    Bird *birds[]{&pigeon2, &crow2};

    for (const auto &bird : birds)
    {
        bird->fly();
    }

    return 0;
}