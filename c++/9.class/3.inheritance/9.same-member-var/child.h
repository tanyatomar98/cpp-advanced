#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include "parent.h"

class Child : public Parent
{
protected:
    int numOfTeeth{0};

public:
    Child() = default;
    Child(int parentTeeth, int childTeeth) : Parent(parentTeeth), numOfTeeth(childTeeth) {}
    ~Child() = default;
    void show_value() const{
        std::cout << "Number of teeth Child have " << numOfTeeth << std::endl;
        std::cout << "Number of teeth Parent have " << Parent::numOfTeeth << std::endl;
    }

    void show_child_value() const {
        std::cout << "Number of teeth child have " << numOfTeeth << std::endl;
    }
};

#endif