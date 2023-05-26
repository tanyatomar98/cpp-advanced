#ifndef CS_ENG_H
#define CS_ENG_H

#include <iostream>
#include "engineer.h"
using engineer_h::Engineer;
using std::ostream;
using std::string;
using std::operator<<;

namespace cs_eng_h
{
    class Cs_eng : public Engineer
    {

        friend ostream &operator<<(ostream &cout, Cs_eng &cs);

    private:
        string speciality{"None"};

    public:
        Cs_eng();
        ~Cs_eng();

        void get_details()
        {
            // Engineer class allow its downstream classes to access the members of its private base class
            // so we can access here some methods of base class
            // this->full_name = "Cs"; // error
            // this->age = 21; // error
            this->get_address(); //no error
            this->get_age(); // no error
            this->get_name(); //no error
            // this->branch; // error
            this->speciality;
        }
    };
}

#endif