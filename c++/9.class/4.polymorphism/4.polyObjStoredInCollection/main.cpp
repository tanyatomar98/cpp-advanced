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

    // on storing raw data obj in base class obj , the data is going to be sliced off
    /*
        std::cout << "Sizeof(circle1): " << sizeof(circle1) << std::endl;
        std::cout << "Sizeof(Shape): " << sizeof(Shape) << std::endl;

        Shape shapes[]{oval1, circle1, oval3, oval2, circle2, circle3};

        std::cout << "Print Shapes: " << std::endl;
        for (Shape &s : shapes)
        {
            // size of each obj in arr is equal to size of Shape obj coz
            // the oval and circle obj are stored in Shape class without any ref/ptr
            // so Shape obj will strip off the data of (oval/circle) and only the data of Shape obj will left
            // check using debugger
            std::cout << "Sizeof(obj): " << sizeof(s) << std::endl; // 40
            s.draw();
        }
    */

    //===================================================================================

    //error
    /*
        reference can not be stored in collection because of left assignability
        reference var does not have their own storage , they just refernce existing objects
        here shapes[] can not get storage coz of reference operator
        Shape& shapes[] {oval1, oval2, circle1, circle3, oval3, circle2};
        int& a = 21; Here a is trying to store value using reference but ref. can not store value
    */

    //===================================================================================

    // raw pointers
    /*
        Shape *shapes[]{&oval3, &circle1, &oval2, &circle2, &oval1, &circle3};
        std::cout << "Sizeof(circle1): " << sizeof(circle1) << std::endl;
        std::cout << "Sizeof(Shape): " << sizeof(Shape) << std::endl;

        std::cout << "\n=========================\n"
                  << std::endl;

        for (Shape *s : shapes)
        {
            std::cout << "Sizeof(Obj): " << sizeof(*s) << std::endl;
            s->draw();
        }
     */

    //===================================================================================

    // smart pointers
    std::shared_ptr<Shape> shapes[] {std::make_shared<Circle>(12.2, "circle1"), std::make_shared<Oval>(1,2,"Oval1") };
    
    for(auto& s: shapes)
    {
        s->draw();
    }
   
   
   
    return 0;
}
