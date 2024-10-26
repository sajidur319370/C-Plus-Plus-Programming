#include "oval.h"
#include "shape.h"

int Oval::m_count{0};

Oval::Oval(double x_radius, double y_radius, const std::string_view description)
    : Shape(description), m_x_radius{x_radius}, m_y_radius{y_radius}
{
    ++m_count;
}
Oval::Oval() : Oval(0.0, 0.0, "No description")
{
}
Oval::~Oval()
{
    --m_count;
}