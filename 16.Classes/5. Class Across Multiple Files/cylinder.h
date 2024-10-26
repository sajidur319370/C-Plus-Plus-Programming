#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder
{
public:
    // Constructors
    Cylinder() = default;
    // Constructors Overload
    Cylinder(double radius_param, double height_param);
    // Function (Method)
    double volume();

    // private:
    // Setters And Getters
    double get_base_radius();
    double get_height();
    void set_base_radius(double rad_param);
    void set_height(double height_param);

private:
    double base_radius{1};
    double height{1};
};
#endif