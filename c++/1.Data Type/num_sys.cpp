#include <iostream>
using namespace std;


int main()
{
    ////////////////////////////////////
    // Binary num, octaDecimal, hexaDecimal, Binary Number
    /////////////////////////////////// 
    int num1 = 15;
    int num2 = 017;
    int num3 = 0x4;
    int num4 = 010;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << endl;

    ////////////////////////////////////
    // Integers Initialiations -> braced initialization, functional initialization, assignment initializations
    ///////////////////////////////////

    //braced initializations
    int braced_initialization_zero{};
    cout << braced_initialization_zero << endl ;

    int braced_initialization_value {10};
    cout << braced_initialization_value << endl;

    int braced_initialization_sum {braced_initialization_value + braced_initialization_value};
    cout << braced_initialization_sum << endl;

    cout << endl;

    //functional initializations
    int paren_init_zero ();
    cout << paren_init_zero << " " << "size: " << sizeof(int) << endl;

    int paren_init_value (20);
    cout << paren_init_value << endl;

    cout << endl;

    //assignment initializations
    int assi_init_zero;
    cout << assi_init_zero << endl;

    int assi_init_value = 30;
    cout << assi_init_value << endl;
    
}