#include <iostream>
#include "shape.h"
#include "oval.h"

int main()
{

    Shape shape1;
    std::cout << "Shape Count: " << Shape::m_count << std::endl;
    Shape shape2;
    std::cout << "Shape Count: " << Shape::m_count << std::endl;
    Shape shape3;
    std::cout << "Shape Count: " << Shape::m_count << std::endl;

    std::cout << "**************************************************" << std::endl;
    Oval oval1(8.9, 6.5, "Oval1");
    std::cout << "Shape Count: " << Shape::m_count << std::endl;
    std::cout << "Oval Count: " << Oval::m_count << std::endl;
    std::cout << "**************************************************" << std::endl;
    Shape *shapes[]{&shape1, &oval1};
    for (auto &shape : shapes)
    {
        std::cout << "count: " << shape->get_count() << std::endl;
    }

    return 0;
}