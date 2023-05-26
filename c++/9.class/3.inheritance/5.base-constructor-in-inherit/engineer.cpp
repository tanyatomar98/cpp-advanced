#include "engineer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, Engineer& eng)
{
    out << "Name: " << eng.name << ", Age: " << eng.age << ", stream: " << eng.stream;
    return out;
}

Engineer::Engineer()
{
    std::cout << "Default Engineer's constructor is called...." << std::endl;
}
// consider bad practice 
/* 
Engineer::Engineer(std::string_view name, int age,std::string_view stream)
{
    this->name = name;
    this->age = age;
    this->stream = stream;
    std::cout << "Custom Engineer's constructor is called...." << std::endl;
} */
/* 
Engineer::Engineer(std::string_view name, int age,std::string_view stream)
: name(name).....
{
}
 */

//good practice -> calling constructor of base class
Engineer::Engineer(std::string_view name, int age,std::string_view stream_param)
: Person(name, age), stream(stream_param)
{
    std::cout << "Custom Engineer's constructor is called...." << std::endl;
}

Engineer::~Engineer()
{
}