#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"
#include <iostream>


class Engineer : public Person
{
    private:
    std::string stream{"Unknown"};

    public:
    Engineer();
    Engineer(std::string_view name, int age,std::string_view stream);
    ~Engineer();
    friend std::ostream& operator<<(std::ostream& out, Engineer& eng);

};


#endif