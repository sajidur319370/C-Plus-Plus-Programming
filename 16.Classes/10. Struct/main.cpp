#include <iostream>
class Dog
{
public:
    std::string m_name;
};
struct Cat
{

    std::string m_name;
};
struct Point
{
    double x;
    double y;
};
void print_point(const Point &point1)
{
    std::cout << "Point: [x: " << point1.x << ", y: " << point1.y << "]" << std::endl;
}
int main()
{

    Dog dog1;
    Cat cat1;

    dog1.m_name = "Fluppy"; // Class -> By default private
    std::cout << "Dog: " << dog1.m_name << std::endl;

    cat1.m_name = "Junny"; // Struct -> By default public
    std::cout << "Cat: " << cat1.m_name << std::endl;

    Point point1;
    point1.x = 55.09;
    point1.y = 44.11;
    print_point(point1);

    return 0;
}