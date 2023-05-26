#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape
{
    protected:
    std::string description;

    public:
    Shape() = default;
    Shape(std::string_view desc) : description(desc) {};
    ~Shape() = default;

    virtual void draw() const {
        std::cout << "Shape::draw() called Drawing " << description << std::endl;
    }


};

#endif