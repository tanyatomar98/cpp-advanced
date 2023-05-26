#include "csEng.h"
#include "engineer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, CsEng& cse)
{
    out << "Name: " << cse.name << ", Age: " << cse.age << ", Speciality: " << cse.speciality;
    return out; 
}

CsEng::CsEng()
{
    std::cout << "Default CsEng'constructor is called..." << std::endl;
}
//bad  practice
/* 
CsEng::CsEng(std::string_view name, int age ,std::string_view stream_param,std::string_view speciality_param)
{
    this->name = name;
    this->age = age;
    // this->stream // error
    this->speciality = speciality;
    std::cout << "Custom CsEng'constructor is called..." << std::endl;
}
 */

// good practice
CsEng::CsEng(std::string_view name, int age ,std::string_view stream_param,std::string_view speciality_param)
: Engineer(name, age, stream_param), speciality(speciality_param)
{
    std::cout << "Custom CsEng'constructor is called..." << std::endl;
}


CsEng::~CsEng()
{
}