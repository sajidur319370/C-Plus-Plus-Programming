#include <iostream>
#include "constants.h"
#include "cylinder.h"
int main()
{
    Cylinder cylinder1(10, 10);
    Cylinder *p_cylinder = &cylinder1;
    // std::cout << "Volume of Cylinder: " << (*p_cylinder).volume() << std::endl;
    std::cout << "Volume of Cylinder: " << p_cylinder->volume() << std::endl;

    // Create cylinder Object through pointer in Heap
    Cylinder *cylinder2 = new Cylinder(5, 10);
    std::cout << "Volume of Cylinder: " << (*cylinder2).volume() << std::endl;
    // std::cout << "Volume of Cylinder: " << cylinder2->volume() << std::endl;
    std::cout << "Base Radius of Cylinder: " << cylinder2->get_base_radius() << std::endl;
    std::cout << "Height of Cylinder: " << (*cylinder2).get_height() << std::endl;

    delete cylinder2;

    return 0;
}