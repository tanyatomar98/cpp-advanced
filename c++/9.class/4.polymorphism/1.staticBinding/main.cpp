#include "shape.h"
#include "oval.h"
#include "circle.h"
#include <iostream>

// static binding shows the bad design part of cpp
// if we have 100 inherited objects from shape then it will create a bad code
// eg shape.draw_circle();
// eg shape.draw_oval();
// eg shape.draw_rectangle();
// eg shape.draw_square();

int main()
{
    Shape shape1("No shape");
    shape1.draw();

    Oval oval1(3.3, 9.4, "Oval");
    oval1.draw();

    Circle circle1(4, "circle");
    circle1.draw();

    // calling the draw method of shape
    Shape * shapePtr = &shape1;
    shapePtr->draw();

    // calling the draw method of shape not of oval -> b'coz pointer shapePtr is belong to Shape class
    shapePtr = &oval1;
    shapePtr->draw();
    
    shapePtr = &circle1;
    shapePtr->draw();


    //base ref
    Shape& shape_ref = circle1;
    shape_ref.draw();

    return 0;
}
