#include <iostream>
using namespace std;

int main()
{
    // refrence must be initialized at declaration

    cout << "================" << endl;

    char char1 = 'n';
    char &ref_char1 = char1;
    cout << "ref_char1: " << ref_char1 << endl;

    // reassigning char1 modify the ref_char1 also
    char1 = 't';
    cout << "ref_char1 (reintialize char1): " << ref_char1 << endl;

    ref_char1 = 'z';
    cout << "ref_char1 (reintialize ref_char1): " << ref_char1 << endl;
    cout << "char1 (modifying ref_char1): " << char1 << endl;

    // refrencing ref_char1 to char2;
    char char2 = 'a';
    ref_char1 = char2; // ref_char1 copy the value of char2 to itself and char1 (first refrencing variable)
    // Refrence variable can not be reintialize -> does not work
    cout << "ref_char1 (reintialize ref_char1): " << ref_char1 << endl;
    cout << "char1 (reinitializing ref_char1 to char2): " << char1 << endl;

    return 0;
}