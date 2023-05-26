#include "engineer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out,const Engineer& eng)
{
    out << "Name: " << eng.name << ", Age: " << eng.age << ", stream: " << eng.stream;
    return out;
}

Engineer::Engineer()
{
    std::cout << "Default Engineer's constructor is called...." << std::endl;
}

Engineer::Engineer(std::string_view name, int age,std::string_view stream_param)
: Person(name, age), stream(stream_param)
{
    std::cout << "Custom Engineer's constructor is called...." << std::endl;
}

//good practice
Engineer::Engineer(const Engineer& obj)
: Person(obj), stream(obj.stream)
{
    std::cout << "Custom Engineer's copy constructor is called...." << std::endl;
}

Engineer::~Engineer()
{
    std::cout << "Engineer's Destructors is called...." << std::endl;
}