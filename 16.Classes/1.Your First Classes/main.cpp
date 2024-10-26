#include <iostream>
const double PI{3.14159};
class Cylinder
{
public:
    double volume()
    {

        return PI * base_radius * height;
    }

public:
    double base_radius{1};
    double height{1};
};
int main()
{
    Cylinder cylinder1;
    std::cout << "Volume of Cylinder: " << cylinder1.volume() << std::endl;
    std::cout << "Volume of Cylinder: " << cylinder1.base_radius << std::endl;
    cylinder1.base_radius = 10;
    cylinder1.height = 10;
    std::cout << "========================================================" << std::endl;
    std::cout << "Volume of Cylinder: " << cylinder1.volume() << std::endl;
    std::cout << "Volume of Cylinder: " << cylinder1.base_radius << std::endl;

    return 0;
}