#include "engineer.h"
#include "person.h"
#include <iostream>
using std::ostream;
using std::operator<<;
using namespace engineer_h;

namespace engineer_h
{
    ostream &operator<<(ostream &out, Engineer &engineer)
    {
        out << "Engineer [Full name : " << engineer.get_name() << ",age : " << engineer.get_age() << ",address : " << engineer.get_address() << ",contract_count : " << engineer.branch << "]";
        return out;
    }
}
