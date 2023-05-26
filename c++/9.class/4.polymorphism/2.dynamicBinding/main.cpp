#include "shape.h"
#include "oval.h"
#include "circle.h"
#include <iostream>

// In static binding the function is calling by looking the type of objects
// eg shape * ptr = &circle 
// ptr->draw() // here the draw method is called for shape type

// In dynamic binding the function is called by only just looking at objects type
// eg shape *ptr = &circle 
// ptr->draw() // here the draw method is called for circle 
// dynamic binding use Virtual keyword

// for more info -> https://www.techiedelight.com/difference-between-static-dynamic-binding-cpp/

void draw_shape(Shape * s)
{
    s->draw();
}

int main()
{
    Shape shape1("No shape");
    shape1.draw();

    Oval oval1(3.3, 9.4, "Oval");
    oval1.draw();

    Circle circle1(4, "circle");
    circle1.draw();
    
    std::cout << "=========================" << std::endl;

    // calling by pointer method
    
    // calling the draw method of shape
    Shape * shapePtr = &shape1;
    shapePtr->draw();

    // calling the draw method of shape not of oval -> b'coz pointer shapePtr is belong to Shape class
    shapePtr = &oval1;
    shapePtr->draw();
    
    shapePtr = &circle1;
    shapePtr->draw();
    
    std::cout << "=========================" << std::endl;

    //base ref
    Shape& shape_ref = circle1;
    shape_ref.draw();

    std::cout << "=========================" << std::endl;
    draw_shape(&shape1);
    draw_shape(&oval1);
    draw_shape(&                                   circle1);

    std::cout << "=========================" << std::endl;
    Shape * shape_collection[]{&oval1, &circle1, &shape1};

    for(Shape* s_ptr: shape_collection)
    {
        draw_shape(s_ptr);
    }

    return 0;
}

    