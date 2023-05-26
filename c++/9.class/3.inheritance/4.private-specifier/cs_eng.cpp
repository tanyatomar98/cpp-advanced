#include <iostream>
#include "engineer.h"
#include "cs_eng.h"
using cs_eng_h::Cs_eng;
using std::ostream;
using std::operator<<;
using std::string;

namespace cs_eng_h
{
    ostream &operator<<(ostream &cout, Cs_eng &cs)
    {
        
        cout << "Computer Science Engineer: [Name: " <<  cs.get_name() << " " << ", Age: " << cs.get_age() << ", Address: " << cs.get_address()
        <<", speciality: " << cs.speciality << " ]";
        return cout;
    }
}

Cs_eng::Cs_eng()
{
}

Cs_eng::~Cs_eng()
{
}