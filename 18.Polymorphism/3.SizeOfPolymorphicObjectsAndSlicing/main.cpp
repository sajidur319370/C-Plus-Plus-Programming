#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    // Compiring Objects sizes
    std::cout << "Size of(Shape): " << sizeof(Shape) << std::endl;   // dynamic:40
    std::cout << "Size of(Oval): " << sizeof(Oval) << std::endl;     // dynamic:56
    std::cout << "Size of(Circle): " << sizeof(Circle) << std::endl; // dynamic:64

    // Slicing
    Circle circle1(5, "circle");
    Shape shape = circle1;
    shape.draw();

    return 0;
}