#include "circle.h"
#include "oval.h"

Circle ::Circle(double radius, const std::string_view description)
    : Oval(radius, radius, description)
{
}
Circle::~Circle()
{
}