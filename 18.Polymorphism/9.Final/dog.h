#ifndef DOG_H
#define DOG_H
#include "feline.h"

class Dog : public Feline
{

public:
    Dog() = default;
    Dog(std::string_view fur_style, std::string_view description);
    virtual ~Dog();
    virtual void bark() const
    {
        std::cout << "Dog" << m_description << " is barking" << std::endl;
    }
    virtual void run() const override final // Virtual vs Final : Final wins
    {
        std::cout << "Dog: Run is called for:" << m_description << std::endl;
    }
};

#endif