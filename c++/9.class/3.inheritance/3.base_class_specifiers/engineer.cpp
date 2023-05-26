#include "engineer.h"
#include <iostream>
using std::ostream;
using std::operator<<;
using namespace engineer_h;

namespace engineer_h
{
    ostream& operator<<(ostream& cout, Engineer& engineer)
    {
        cout << engineer.full_name << " " << engineer.age; 
        return cout;
    }
}
