#include <iostream>
#include "constants.h"
#include "cylinder.h"
int main()
{
    Cylinder cylinder1(10, 10);
    std::cout << "Volume of Cylinder: " << cylinder1.volume() << std::endl;
    std::cout << "Radius of Cylinder: " << cylinder1.get_base_radius() << std::endl;
    std::cout << "========================================================" << std::endl;
    cylinder1.set_base_radius(5);
    cylinder1.set_height(10);
    std::cout << "Volume of Cylinder: " << cylinder1.volume() << std::endl;
    std::cout << "Radius of Cylinder: " << cylinder1.get_base_radius() << std::endl;
    return 0;
}