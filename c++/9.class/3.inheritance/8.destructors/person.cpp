#include "person.h"
#include <iostream>

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Name: " << person.name << " "
        << "Age: " << person.age;
    return out;
}

Person::Person()
{
    std::cout << "Default Person's constructor is called...." << std::endl;
}

Person::Person(std::string_view name, int age)
{
    this->name = name;
    this->age = age;
    std::cout << "Custom Person's constructor is called...." << std::endl;
}

Person::Person(const Person &obj)
: name(obj.name), age(obj.age) 
{    
    std::cout << "Custom Person's copy constructor is called...." << std::endl;

}

Person::~Person()
{
    std::cout << "Person's Destructors is called...." << std::endl;
}