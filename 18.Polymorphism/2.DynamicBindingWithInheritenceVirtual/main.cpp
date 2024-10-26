#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
void draw_shape_ptr(Shape *s_pt)
{
    s_pt->draw();
}
void draw_shape_ref(Shape &s_rf)
{
    s_rf.draw();
}

int main()
{
    // Objects
    Shape shape("Shape");
    Oval oval(7.3, 8.6, "Oval");
    Circle circle(5.5, "circle");

    // Base Pointer
    Shape *shape_ptr = &oval;
    // shape_ptr->draw();

    // Base reference
    Shape &shape_ref = circle;
    // shape_ref.draw();

    // Drawing Shapes
    /* draw_shape_ptr(&oval);
    draw_shape_ref(circle); */

    Shape *shape_collection[]{&shape, &oval, &circle};
    for (Shape *s : shape_collection)
    {
        s->draw();
    }

    return 0;
}