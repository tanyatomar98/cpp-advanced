#ifndef OVAL_H
#define OVAL_H

#include <iostream>
#include "shape.h"

class Oval : public Shape
{
protected:
    double xRadius{0};
    double yRadius{0};

public:
    Oval() = default;
    Oval(double xR, double yR, std::string_view description) : xRadius(xR), yRadius(yR), Shape(description){};
    ~Oval() = default;

    /*
        // oval.draw() ----------- compiler working ----> search for draw method in oval
        // draw() !== DRAW() ; draw() method in oval not found
        // search for draw() method in parent class --- method found --- call parent class method
        // This kind of typos are difficult to find and create a bug in program
        virtual void DRAW() const {
            std::cout << "Oval::draw() called Drawing " << description << " X-radius: " << xRadius << " Y-radius" << yRadius <<std::endl;
        }
    */

    /*
        // override keyword is helpful in above condition to detect typos or solve bugs
        virtual void DRAW() const override // throw error , DRAW method does not exist in base class which we want to override so correct it
        {
            std::cout << "Oval::draw() called Drawing " << description << " X-radius: " << xRadius << " Y-radius" << yRadius << std::endl;
        }
         */

    virtual void draw() const override // override keyword is safe to use with virtual keyword
    {
        std::cout << "Oval::draw() called Drawing " << description << " X-radius: " << xRadius << " Y-radius" << yRadius << std::endl;
    }
};

#endif