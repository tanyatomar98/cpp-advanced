#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string_view>
using std::cout;
using std::ostream;
using std::string;
using std::operator<<;
using std::string_view;

namespace person_h
{
    class Person
    {

        friend ostream &operator<<(ostream &cout, Person &per);

    public:
        string full_name{"john snow"};

    protected:
        int age{24};

    private:
        string address{"North wall"};

    public:
        Person();
        Person(string_view full_name_param, int age_param, string_view address_view);
        ~Person();

        // getter
        string get_name()
        {
            return full_name;
        }

        int get_age()
        {
            return age;
        }

        string get_address()
        {
            return address;
        }

    };

}

#endif