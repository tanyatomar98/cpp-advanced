#include "csEng.h"
#include "engineer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out,const CsEng& cse)
{
    out << "Name: " << cse.name << ", Age: " << cse.age << ", Speciality: " << cse.speciality;
    return out; 
}

CsEng::CsEng()
{
    std::cout << "Default CsEng'constructor is called..." << std::endl;
}

// good practice
CsEng::CsEng(std::string_view name, int age ,std::string_view stream_param,std::string_view speciality_param)
: Engineer(name, age, stream_param), speciality(speciality_param)
{
    std::cout << "Custom CsEng's constructor is called..." << std::endl;
}


//passing obj is good practice b'coz base class can access its private member from inherit class obj
CsEng::CsEng(const CsEng& obj)
: Engineer(obj), speciality(obj.speciality)
{
    std::cout << "Custom CsEng's copy constructor is called..." << std::endl;
}

CsEng::~CsEng()
{
    std::cout << "CS Engineer's Destructors is called...." << std::endl;
}