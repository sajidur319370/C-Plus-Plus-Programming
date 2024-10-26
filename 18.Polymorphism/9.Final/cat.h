#ifndef CAT_H
#define CAT_H
#include "feline.h"

class Cat final : public Feline
{

public:
    Cat() = default;
    Cat(std::string_view fur_style, std::string_view description);
    virtual ~Cat();
    virtual void miaw() const
    {
        std::cout << "Cat" << m_description << " is Meawing" << std::endl;
    }
    virtual void run() const override
    {
        std::cout << "Cat: Run is called for:" << m_description << std::endl;
    }
    virtual void breathe() const override
    {
        std::cout << "Cat: Breath called for: " << m_description << std::endl;
    }
};

#endif