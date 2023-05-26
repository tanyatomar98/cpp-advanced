#include <iostream>
#include <string_view>
#include <bitset>
using namespace std;

class Id
{
    private:
    string name;
    string father_name;
    int *age = nullptr;

    public:
    //constructor
    Id() = default;
    Id(string name, string father_name, int age)
    {
        this->name = name;
        this->father_name = father_name;
        this->age = new int(age);
        cout << "Constructor called for id " << this->name;
    }

    //print data
    void print_info()
    {
        cout << "Name: " << this->name << endl;
        cout << "Father Name: " << this->father_name << endl;
        cout << "Age: " << *this->age << endl;
    }

    //setter = chained calls using
    /* Id* set_name(string name)
    {
        this->name = name;
        return this;
    }

    Id* set_father_name(string father_name)
    {
        this->father_name = father_name;
        return this;
    }

    Id* set_age(int age)
    {
        *this->age = age;
        return this;
    } */

    
    //setters = chained calls using refrences
    Id& set_name(string name)
    {
        this->name = name;
        return *this;
    }

    Id& set_father_name(string father_name)
    {
        this->father_name = father_name;
        return *this;
    }

    Id& set_age(int age)
    {
        *this->age = age;
        return *this;
    }

    ~Id()
    {
        cout << "Delete Id with name: " << this->name << " memory address: " << this << endl;
        delete age;
    }

};

int main()
{
    Id empl1 = Id("tanya", "Rajeev", 21);
    empl1.print_info();

    // empl1.set_name("Tanya Tomar");
    // empl1.set_father_name("Rajiv Tomar");
    // empl1.print_info();

    //chained calls using pointers
    // empl1.set_name("Tanu Singh")->set_father_name("Rajiv Singh")->set_age(22);

    //chained calls using refrence
    empl1.set_name("Tanu Singh").set_father_name("Rajiv Singh").set_age(22);

    empl1.print_info();

    



    return 0;
}
