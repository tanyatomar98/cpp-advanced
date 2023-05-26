#include "engineer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, Engineer& eng)
{
    out << "Name: " << eng.name << ", Age: " << eng.age << ", stream: " << eng.stream;
    return out;
}

Engineer::~Engineer()
{
}