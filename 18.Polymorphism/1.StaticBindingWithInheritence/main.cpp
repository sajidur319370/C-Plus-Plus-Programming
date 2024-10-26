#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
void draw_shape(Shape &shape)
{
    shape.draw();
}
void draw_oval(const Oval &oval)
{
    oval.draw();
}
void draw_circle(const Circle &circle)
{
    circle.draw();
}

int main()
{

    Shape shape("Shape");
    // shape.draw();

    Oval oval(7.0, 8.0, "Oval");
    // oval.draw();

    Circle circle(5.0, "circle");
    // circle.draw();

    // Base Pointer
    Shape *shape_ptr = &shape;
    // shape_ptr->draw();         // Draw a shape

    shape_ptr = &oval;
    // shape_ptr->draw(); // Draw an oval

    shape_ptr = &circle;
    // shape_ptr->draw();

    // Base reference
    Shape &shape_ref = shape;
    // shape_ref.draw(); // Draw shape

    shape_ref = oval;
    // shape_ref.draw(); // Draw oval

    shape_ref = circle;
    // shape_ref.draw(); // Draw circle

    // Drawing Shapes
    draw_shape(shape);
    draw_circle(circle);
    draw_oval(oval);

    return 0;
}