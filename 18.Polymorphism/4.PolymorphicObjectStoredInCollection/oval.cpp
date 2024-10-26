#include "oval.h"
#include "shape.h"

Oval::Oval(double x_radius, double y_radius, const std::string_view description)
    : Shape(description), m_x_radius{x_radius}, m_y_radius{y_radius}
{
}
Oval::~Oval()
{
}