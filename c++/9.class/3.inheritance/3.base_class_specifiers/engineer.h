#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include "person.h"
using person_h::Person;
using std::ostream;
using std::operator<<;
using std::string;

namespace engineer_h
{
    class Engineer : private Person
    {
        friend ostream &operator<<(ostream &cout, Engineer &engineer);

    private:
        string branch{"unknown"};

    public:
        Engineer()
        {
        }

        ~Engineer()
        {
        }

        void details()
        {
            cout << this->full_name;
            cout << std::endl << age;
        }

    };
}

#endif