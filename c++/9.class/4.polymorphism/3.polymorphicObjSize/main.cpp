#include "shape.h"
#include "oval.h"
#include "circle.h"
#include <iostream>

int main()
{
    // using polymorphism in code required extra memory 
    std::cout << "Sizeof(Shape): " << sizeof(Shape) << std::endl;   // dynamic size: 40 , staic size: 32
    std::cout << "Sizeof(Oval): " << sizeof(Oval) << std::endl;     // dynamic size: 56 , staic size: 48
    std::cout << "Sizeof(Circle): " << sizeof(Circle) << std::endl; // dynamic size: 64 , staic size: 56

    std::cout << std::endl;
    std::cout << "_______ Slicing _________" << std::endl;
    std::cout << std::endl;

    Circle circle(3.3, "Circle");
    // assigning circle obj to shape will  rip off the circle and oval part of obj and only shape part will left
    // which will assign to  shape_obj variable
    Shape shape_obj = circle; // circle obj is assign to shape without ref/ptr which does not support polymorphism
    shape_obj.draw();

    std::cout << std::endl;
    std::cout << "_______Avoid Slicing _________" << std::endl;
    std::cout << std::endl;

    Shape &shape_ref_obj = circle;
    std::cout << "Shape_ref_obj:: " << std::endl;
    shape_ref_obj.draw();

    Shape *shape_ptr_obj = &circle;
    std::cout << "Shape_ptr_obj:: " << std::endl;
    shape_ptr_obj->draw();

    return 0;
}
