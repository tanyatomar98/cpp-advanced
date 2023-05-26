#include <iostream>
using namespace std;

int main()
{

    // character value to ascii value
    char char1 {'a'};
    printf("char1(char): %c , char1(ascii): %d , size: %zu \n", char1, char1, sizeof(char1));

    // ascii value to char value
    int capital_a {65};
    printf("capital_a(digit): %d , capital_a(char): %c , size: %zu\n", capital_a, capital_a, sizeof(capital_a));

    
    cout << endl;
    return 0;
}