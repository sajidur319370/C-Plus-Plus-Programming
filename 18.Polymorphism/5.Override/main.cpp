#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{

    //   Objects
    Circle circle1(4.5, "circle1");
    Oval oval1(6.6, 3.4, "oval1");
    Circle circle2(7.6, "circle2");
    Oval oval2(4.8, 4.4, "oval2");
    Circle circle3(6.7, "circle3");
    Oval oval3(4.5, 3.4, "oval3");

    // Raw Pointers
    Shape *shapes[]{&circle1, &circle2, &circle3, &oval1, &oval2, &oval3};

    for (Shape *shape_ptr : shapes)
    {
        shape_ptr->draw();
    }

    return 0;
}