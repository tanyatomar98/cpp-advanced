#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"
#include <iostream>

class Engineer : public Person
{
private:
    std::string stream{"Unknown"};

public:
    /* 
        Engineer();
        Engineer(std::string_view name, int age,std::string_view stream);
     */
    // constructors are inherited with access specifier they had in base class
    // Inherting the base class constructor
    // copy constructor of base class can not be inheritated to derived class  
    using Person::Person;

    ~Engineer();
    friend std::ostream &operator<<(std::ostream &out, Engineer &eng);
};

#endif