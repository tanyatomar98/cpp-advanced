#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string_view>
using std::cout;
using std::string;
using std::ostream;
using std::operator<<;
using std::string_view;

// definition of friend function outside class omits friend keywork and also omit the class scope(::) parameter 
// so compiler does not find any parent of that friend func which throw -> undefined reference error
// To avoid such errors, we declare a class inside custom namespace which provides scope to tha class
// Now, if we define friend func outside class in other files then we can use this namespace
// refer person.cpp file

namespace person_h
{
    class Person
    {
    
    friend ostream& operator<<(ostream& cout, Person& per);
    private:
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