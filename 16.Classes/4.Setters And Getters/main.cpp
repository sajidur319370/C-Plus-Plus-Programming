#include <iostream>
const double PI{3.14159};
class Cylinder
{
public:
    // Constructors
    Cylinder() = default;

    Cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    };

    // Function (Method)
    double volume()
    {

        return PI * base_radius * height;
    };

    // private:
    // Setters And Getters
    double get_base_radius()
    {
        return base_radius;
    };
    double get_height()
    {
        return height;
    };
    void set_base_radius(double rad_param)
    {
        base_radius = rad_param;
    };
    void set_height(double height_param)
    {
        height = height_param;
    };

private:
    double base_radius{1};
    double height{1};
};
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