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
        cout << "Name: " << per.full_name;
        return cout;
    }
}

Person::Person()
{
}

Person::Person(string_view full_name_param,int age_param, string_view address_param)
    :full_name(full_name_param), age(age_param), address(address_param)
{
}

Person::~Person()
{
}
