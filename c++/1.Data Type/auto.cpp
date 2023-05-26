#include <iostream>
using namespace std;

int main()
{
    //typeid -> return the type of variable
    auto integer {100};
    cout << typeid(integer).name() << endl;

    auto character {"T"};
    cout << typeid(character).name() << endl;

    auto booleans {false};
    cout << typeid(booleans).name() << endl;

    auto floating {1.99f};
    cout << typeid(floating).name() << endl;

    auto doubling {2.99};
    cout << typeid(doubling).name() << endl;

    auto long_double {199.7999};
    cout << typeid(long_double).name() << endl;

    // unsigned int declare first can not store negative reassign value
    auto un_val {19u};
    cout << typeid(un_val).name() << endl;

    //reassigning negative value -> throws error because un_val is initialized to unsigned value , can not store signed value
    // un_val {-19};
    

    //////////////////////////////////////

    bool state {true};
    cout << "state: " << state << endl;
    // boolalpha -> print true or false insted of 1 and 0
    cout << boolalpha;
    cout << "state: " << state << endl;


    return 0;
}