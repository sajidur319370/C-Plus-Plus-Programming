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

    oval1.draw();
    oval1.draw(64);

    circle1.draw();
    circle1.draw(48);

    return 0;
}