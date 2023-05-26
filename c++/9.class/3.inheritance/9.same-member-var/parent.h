#ifndef PARENT_H
#define PARENT_H

#include <iostream>

class Parent
{
protected:
    int numOfTeeth{0};

public:
    Parent() = default;
    Parent(int teeth) : numOfTeeth(teeth) {}
    ~Parent() = default;

    void get_value() const
    {
        std::cout << "Number of teeth parent have: " << numOfTeeth << std::endl;
    }

};

#endif