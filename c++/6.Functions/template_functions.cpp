#include <iostream>
using namespace std;


// function template -> by value
template <typename T>
T addition(T x, T y);



int main()
{
    int val1 = 21;
    int val2 = 8;

    cout << "===case 1===" << endl;
    int result = addition(val1, val2);
    cout << "Addition(21+9): " << result << endl;

    cout << "=== case 2 ===" << endl;
    double dbl_val = 33.33;
    // result = addition(val1, dbl_val); // throw error -> val1 (int) and dbl_val(double)

    cout << "=== case 3 ===" << endl; // addition of string using template function
    string string_val1 = "tanya ";
    string string_val2 = "tomar";
    string string_res = addition(string_val1, string_val2);
    cout << "addition(tanya, tomar): " << string_res << endl;

    // to avoid datatype error (differnet type of argument) 
    // use this format -> function_name <datatype of argument>
    cout << "=== case 4===" << endl;
    result = addition<double>(val1, dbl_val); // result-> type int
    double dbl_res = addition<double>(val1, dbl_val);
    cout << "addition(21, 33.33)(result->int): " << result << endl;
    cout << "addition(21, 33.33)(result->double): " << dbl_res << endl;

    

    return 0;
}

template <typename T>
T addition(T x, T y)
{
    return x+y;
}
