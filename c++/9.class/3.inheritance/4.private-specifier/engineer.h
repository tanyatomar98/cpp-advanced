#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include "person.h"
using person_h::Person;
using std::ostream;
using std::operator<<;
using std::string;


// inheriting Person class as Private make all the members of base class private
// which can only be access within class 
namespace engineer_h
{
    class Engineer : private Person
    {
        friend ostream &operator<<(ostream &cout, Engineer &engineer);

    private:
        string branch{"unknown"};
        // base class -> public full_name | derived class -> private full_name 
        // base class -> protected age    | derived class -> private age
        // base class -> private address  | derived class -> inacessible


    // This will allow downstream class of engineer to access the members of its private base class(Person)
    // Here protected specifier can also change to public specifier.
    // Any private members of base class can not be access using this method.
    protected:
        using Person::get_name;
        using Person::get_age;
        using Person::get_address;

    public:
        Engineer()
        {
        }

        ~Engineer()
        {
        }

        void details()
        {
            this->full_name = "Engineer Name"; // ok
            this->age = 26; // ok
            // this->address = "xxxx" // error
        }

    };
}

#endif