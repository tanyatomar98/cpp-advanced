#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "oval.h"
#include "shape.h"

class Circle : public Oval
{
    protected:
    double radius;

    public:
    Circle() = default;
    Circle(double r, std::string_view description) : radius(r), Oval(r,r,description) {};
    ~Circle() = default;

    void draw() const {
        std::cout << "Circle::draw() called Drawing " << description << " radius " << radius << std::endl;
    }
};

#endif