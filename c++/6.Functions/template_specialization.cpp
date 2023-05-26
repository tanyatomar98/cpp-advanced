#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
T maximum(T a, T b);

// template specialization of maximum
// template specialization -> how to deal in certain condition by avoiding default behaviour
template <>
const char *maximum<const char *>(const char* a, const char* b)
{
    return strcmp(a, b) > 0 ? a:b;
}

int main()
{
    string str1 = "animal";
    string str2 = "wild";
    auto result = maximum(str1, str2);
    cout << "max(str1, str2): " << result << endl;

    cout << "======" << endl;
    const char *ptr1 = "wimal";
    const char *ptr2 = "wild";

    // here max function compare the address of the pointer instead of string
    // return the address which is larger than other (if address of ptr1 > ptr2 : ptr1 = animal) else ptr2 = wild
    // to overcome such problem , we use template speacialization
    auto *result2 = maximum(ptr1, ptr2);
    cout << "max(ptr1, ptr2): " << result2 << endl;

    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}