#include <iostream>
using namespace std;

int main ()
{
    ////////////////
    // unsigned int do not contain negative value

    // int modifier
    int integer1 {10};
    printf("Integer1: %d, size: %zu \n", integer1, sizeof(integer1) );

    cout << endl;

    // short int
    short integer2 {5};
    printf("integer2: %d , size: %zu \n", integer2, sizeof(integer2) );

    cout << endl;

    // unsigned short
    unsigned short int integer3 {15};
    printf("integer3: %d , size: %zu \n", integer3, sizeof(integer2) );

    cout << endl;

    // unsigned int
    unsigned int integer4 {8};
    printf("integer4: %d , size: %zu \n", integer4, sizeof(integer4) );
    signed int integer5 {16};
    printf("integer5: %d , sizeo: %zu \n", integer5, sizeof(integer5));
    
    cout << endl;

    // long
    unsigned long un_long_var {100};
    printf("Unsigned_long_var: %d , size: %zu \n", un_long_var, sizeof(un_long_var) );
    signed long long_var {200};
    printf("signed_long_var: %d , size: %zu \n",long_var, sizeof(long_var) );



    cout << endl;

    // long
    unsigned long long un_long2_var {1000};
    printf("Unsigned_long2_var: %d , size: %zu \n", un_long2_var, sizeof(un_long2_var) );
    signed long long long2_var {2000};
    printf("signed_long2_var: %d , size: %zu \n",long2_var, sizeof(long2_var) );

    

    cout << endl;



    return 0;
}