#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"

class Pigeon : public Bird
{

public:
    Pigeon() = default;
    Pigeon(std::string_view wing_color, std::string_view description);
    virtual ~Pigeon();
    virtual void coo() const
    {
        std::cout << "Pigeon: " << m_description << " is cooing" << std::endl;
    }
    virtual void fly() const override
    {
        std::cout << "Pigeon:Fly is called for: " << m_description << std::endl;
    }
    virtual void breathe() const override
    {
        std::cout << "Pigeon: Breath called for: " << m_description << std::endl;
    }
};

#endif