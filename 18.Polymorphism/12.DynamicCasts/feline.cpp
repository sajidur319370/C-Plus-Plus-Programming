#include "feline.h"
#include <iostream>

Feline::Feline(std::string_view fur_style, std::string_view description)
    : Animal(description), m_fur_style{fur_style}
{
}

Feline::~Feline()
{
    std::cout << "Feline Destructor called" << std::endl;
}