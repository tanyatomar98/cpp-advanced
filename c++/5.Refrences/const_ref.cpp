#include <iostream>
using namespace std;

int main()
{
    // pointing variable does not need to be constant
    int age = 21;

    const int &ref_age {age}; // const ref
    cout << "Age: " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    cout << "====modifying age=====" << endl;

    age = 23;
    cout << "Age: " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    cout << "====modifying ref_age=====" << endl;

    // throw error
    // ref_age = 25; // const ref can not modify
    // cout << "ref_age: " << ref_age << endl;


    return 0;
}