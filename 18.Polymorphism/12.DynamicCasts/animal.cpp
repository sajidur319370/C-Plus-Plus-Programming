#include "animal.h"
#include <iostream>

Animal::Animal(std::string_view description) : m_description{description}
{
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}