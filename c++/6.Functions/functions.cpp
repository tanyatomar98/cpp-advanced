#include <iostream>
#include <string_view>
using namespace std;

/////////////////////////////
// dont rely on return type functions
// return value - not address
int sum(int a, int b)
{
    int result = a+b;
    cout << "&result: " << &result << endl;
    cout << "result: " << result << endl;
    return result;
}

// return address for strings - not value
string add_str(string str1, string str2)
{
    string result = str1 + str2;
    cout << "&result: " << &result << endl;
    return result;
}

////////////////////////////////////
// using refrences and pointer arguments -> good practice

void ref_add(int a, int b, int &add)
{
    add = a+b;
}




int main()
{
    int val1 = 21;
    int val2 = 9;
    int out_result = sum(val1, val2);

    cout << "&out_result: " << &out_result << endl;
    cout << "out_result: " << out_result << endl;

    cout << "========" << endl;

    string s1 = "Hello ";
    string s2 = "World!";

    string res = add_str(s1, s2);
    cout << "&res: " << &res << endl;
    cout << "res: " << res << endl;

    cout << "=========" << endl;

    int ref_result {};
    ref_add(val1, val2, ref_result);

    cout << "add (refrence function): " << ref_result << endl;


    return 0;
}