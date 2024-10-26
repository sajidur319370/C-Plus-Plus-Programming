#ifndef BIRD_H
#define BIRD_H
#include "animal.h"

class Bird : public Animal
{

public:
    Bird() = default;
    Bird(std::string_view wing_color, std::string_view description);
    virtual ~Bird();
    virtual void fly() const
    {
        std::cout << "Bird:Fly is called for: " << m_description << std::endl;
    }

private:
    std::string m_wing_color;
};

#endif