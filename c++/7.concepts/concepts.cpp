#include <iostream>
#include <string.h>
#include <concepts>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (strcmp(a, b) > 0) ? a : b;
}

// syntax 1
// template <integral T>
// T add(T a, T b)
// {
//     return a + b;
// }


// syntax 2
// template <typename T>
// requires integral <T>
// T add(T a, T b)
// {
//     return a+b;
// }

// syntax 3
auto add (integral auto a, integral auto b)
{
    return a+b;
}


int main()
{
    int int_a = 10;
    int int_b = 100;
    
    double double_a = 9.87;
    double double_b = 7.98;

    cout << "hello world" << endl;
    cout << maximum(8, 10) << endl;
    cout << maximum("hello", "world") << endl;

    cout << "======================" << endl;
    cout << "Add(5, 10): " << add(5, 10) << endl;
    // cout << "Add(5.908, 10): " << add(5.87, 10) << endl; // error 

    return 0;
}
