#include "person.h"
#include <iostream>
#include <string_view>
using person_h::Person;
using std::cout;
using std::ostream;
using std::string;
using std::operator<<;
using std::string_view;

// use namespace to avoid undefined reference error
namespace person_h
{
    ostream &operator<<(ostream &cout, Person &per)
    {
        cout << "Name: ";
        return cout;
    }
}

Person::Person()
{
}

Person::Person(string_view first_name_param, string_view last_name_param)
    : first_name(first_name_param), last_name(last_name_param)
{
}

Person::~Person()
{
}

//getter
string Person::get_first_name()
{
    return this->first_name;
}

string Person::get_last_name()
{
    return this->last_name;
}

//setter
void Person::set_first_name(string_view first_n)
{
    this->first_name = first_n;
}

void Person::set_last_name(string_view last_n)
{
    this->last_name = last_n;
}