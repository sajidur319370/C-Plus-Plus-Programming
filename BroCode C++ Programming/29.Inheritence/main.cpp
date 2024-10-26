#include <iostream>
class Shape
{
public:
    double area;
    double volume;
};
class Cube : public Shape
{
public:
    double side;
    Cube(double side)
    {
        this->side = side;
        this->area = 6 * side * side;
        this->volume = side * side * side;
    }
};
class Sphere : public Shape
{
public:
    double radius;
    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    }
};
int main()
{
    Cube cube(10);
    Sphere sphere(10);

    std::cout << "Area of cube: " << cube.area << std::endl;
    std::cout << "Volume of cube: " << cube.volume << std::endl;
    std::cout << "Area of sphere: " << sphere.area << std::endl;
    std::cout << "Volume of sphere: " << sphere.volume << std::endl;

    return 0;
}