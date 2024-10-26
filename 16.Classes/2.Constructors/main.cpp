#include <iostream>
const double PI{3.14159};
class Cylinder
{
public:
    // Constructors
    /* Cylinder()
    {
        base_radius = 2.5;
        height = 3.6;
    }

    Cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }; */
    // Function (Method)
    double volume()
    {

        return PI * base_radius * height;
    }

private:
    double base_radius{1};
    double height{1};
};
int main()
{
    Cylinder cylinder1;
    std::cout << "Volume of Cylinder: " << cylinder1.volume() << std::endl;
    std::cout << "========================================================" << std::endl;

    return 0;
}