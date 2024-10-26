#ifndef CROW_H
#define CROW_H
#include "bird.h"

class Crow : public Bird
{

public:
    Crow() = default;
    Crow(std::string_view wing_color, std::string_view description);
    virtual ~Crow();
    virtual void cow() const
    {
        std::cout << "Crow: " << m_description << " is cowing" << std::endl;
    }
    virtual void fly() const override
    {
        std::cout << "Crow:Fly is called for: " << m_description << std::endl;
    }
    virtual void breathe() const override
    {
        std::cout << "Crow: Breath called for: " << m_description << std::endl;
    }
};

#endif