#include "shape.h"
#include "oval.h"
#include "circle.h"
#include <iostream>
#include <memory>


int main()
{
    Circle circle1(4, "circle 1");
    Oval oval1(10.1, 9.1, "Oval 1");
    Circle circle2(9.99, "circle 2");
    Oval oval2(8.8, 9.8, "Oval 2");
    Circle circle3(3.2, "circle 3");
    Oval oval3(1, 2, "oval 3");

    
    // smart pointers
    std::shared_ptr<Shape> shapes[] {std::make_shared<Circle>(12.2, "circle1"), std::make_shared<Oval>(1,2,"Oval1") };
    
    for(auto& s: shapes)
    {
        s->draw();
    }
   
   
   
    return 0;
}
