#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string_view>
using std::cout;
using std::string;
using std::ostream;
using std::operator<<;
using std::string_view;

namespace person_h
{
    class Person
    {
    
    friend ostream& operator<<(ostream& cout, Person& per);
    // protected keyword allow derived class to be access private members but only within derived class scope 
    protected:
        string first_name{"default1"};
        string last_name{"default2"};
    public:
        Person();
        Person(string_view first_name_param, string_view last_name_param);
        ~Person();

        //getter
        string get_first_name();
        string get_last_name();

        //setter
        void set_first_name(string_view first_n);
        void set_last_name(string_view last_n);
    };
    
}

#endif