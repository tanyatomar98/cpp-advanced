#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person
{
protected:
    std::string name{"Guest"};
    int age{0};

public:
    friend std::ostream &operator<<(std::ostream &out,const Person &person);
    
    Person();
    Person(std::string_view name, int age);
    Person(const Person& person);
    ~Person();
};

#endif