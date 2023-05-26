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
    Oval(double xR,double yR, std::string_view description) : xRadius(xR), yRadius(yR), Shape(description) {};
    ~Oval() = default;

    virtual void draw() const {
        std::cout << "Oval::draw() called Drawing " << description << " X-radius: " << xRadius << " Y-radius" << yRadius <<std::endl;
    }
};

#endif