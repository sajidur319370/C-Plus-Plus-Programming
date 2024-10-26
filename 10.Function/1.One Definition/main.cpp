#include <iostream>
#include "person.h"
// double weight{};
// double add(double a, double b);
/* struct Point
{

    double m_x{};
    double m_y{};
}; */
int Person ::person_count = 8;
Person::Person(const std::string &name_param, int age_param)
    : full_name{name_param}, age{age_param}
{
    ++person_count;
}
int main()
{
    Person persion("Sajidur", 26);
    persion.printInfo();
    /* Point p;
    std::cout << "m_x: " << p.m_x << ", m_y: " << p.m_y << std::endl;
    double result = add(10.3, 5.6);
    std::cout << "Result: " << result << std::endl; */

    return 0;
}

/* double add(double a, double b)
{
    return a + b;
}
 */