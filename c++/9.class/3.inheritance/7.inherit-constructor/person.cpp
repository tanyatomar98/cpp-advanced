#include "person.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, Person& person)
{
    out << "Name: " << person.name << " " << "Age: " << person.age;
    return out;

}

Person::Person()
{
    std::cout << "Default Person's constructor is called...." << std::endl;
}

Person::Person(std::string_view name_param , int age_param)
: name(name_param), age(age_param)
{
    std::cout << "Custom Person's constructor is called...." << std::endl;

}

Person::~Person()
{
}