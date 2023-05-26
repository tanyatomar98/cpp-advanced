#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include "person.h"
using person_h::Person;
using std::ostream;
using std::string;
using std::operator<<;

namespace doctor_h
{
    class Doctor : protected Person
    {
        // on defining friend func inside class allows to use protected member of base class
        // if define friend func outside class do not allow to use protected member of base class
        // doctor.cpp can not access protected member of base class
        friend ostream &operator<<(ostream &cout, Doctor &doctor)
        {
            cout << "Doctor's Name: " << doctor.full_name << std::endl
                 << "Age: " << doctor.age << std::endl
                 <<
                // "Address: " << doctor.address // address is inaccessible -> private
                "Address: " << doctor.get_address() << std::endl;

            return cout;
        }

    private:
        int certificate_id{0};

    public:
        Doctor() = default;
        ~Doctor()
        {
        }
    };
}

#endif