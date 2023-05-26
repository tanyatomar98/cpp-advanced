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

    virtual void draw() const override // override keyword is safe to use with virtual keyword
    {
        std::cout << "Oval::draw() called Drawing " << description << " X-radius: " << xRadius << " Y-radius" << yRadius << std::endl;
    }

    virtual void draw(int val, std::string_view color)
    {
        std::cout << "Oval::draw() color " << val << " with depth of " << val << std::endl;
    }
};

#endif