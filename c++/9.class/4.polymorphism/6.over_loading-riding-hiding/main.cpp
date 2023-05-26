#include "shape.h"
#include "oval.h"
#include "circle.h"
#include <iostream>
#include <memory>

int main()
{

/* 
    Circle circle1(4, "circle 1");
    Oval oval1(10.1, 9.1, "Oval 1");

    circle1.draw();
    // error because draw method is override in circle.h, so compiler will search for draw method in only circle class( and circle do not have such parameterized draw method)
    // if we also define draw(int val) method in circle class then no error will occur
    circle1.draw(44);
 */
     
    Shape *shape_ptr = new Circle(9.1, "Circle");
    shape_ptr->draw(23, "Red");



    return 0;
}
