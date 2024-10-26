#ifndef CIRCLE_H
#define CIRCLE_H
#include "oval.h"
#include <string_view>
class Circle : public Oval
{
public:
    Circle() = default;
    Circle(double radius, const std::string_view description);
    ~Circle();
    virtual void draw() const override
    {
        std::cout << "Circle::Draw() called.Drawing: " << m_description
                  << " with radius: " << get_x_rad()
                  << std::endl;
    }

private:
    double m_radius{0};
};
#endif