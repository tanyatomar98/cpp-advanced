#include <iostream>
using namespace std;


//return value
template <typename T>
const T& max_refrence(const T& a, const T& b);

// void type function
template <typename T>
void str_ref(const T& str1, const T& str2);

int main()
{
    int int_val1 = 21;
    int int_val2 = 31;
    cout << "&int_val1 (out function): " << &int_val1 << endl;
    cout << "&int_val2 (out function): " << &int_val2 << endl;
    max_refrence(int_val1, int_val2);

    cout << "============" << endl;

    string str1 = "tanya ";
    string str2 = "tomar";
    cout << "out -> &str1: " << &str1 << endl;
    cout << "in -> &str2: " << &str2 << endl;
    str_ref(str1, str2);


    return 0;
}

template <typename T>
const T& max_refrence(const T& a, const T& b)
{
    cout << "&a (in function): " << &a << endl;
    cout << "&b (in function): " << &b << endl;

    return (a > b) ? a:b;
}

template <typename T>
void str_ref(const T& str1, const T& str2)
{
    cout << "in -> &str1: " << &str1 << endl; 
    cout << "in -> &str2: " << &str2 << endl; 
}