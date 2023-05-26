#include <iostream>
#include "person.h"
#include "player.h"
#include "doctor.h"
#include "engineer.h"
using namespace person_h;
using namespace player_h;
using namespace doctor_h;
using namespace engineer_h;
using std::cout;

int main()
{
    // public specifier

    Player p1;
    cout << p1 << std::endl;
    p1.full_name = "john";
    // p1.age = 21 // age is protected so only be access inside derived class
    // p1.address // address is private member so derived class can not access it

    cout << "=====================================================" << std::endl;
    //private specifier
    Doctor d1;
    cout << d1;
    // d1.full_name // protected specifer wont allow to acess
    
    cout << "=====================================================" << std::endl;

    // private specifier
    Engineer e1;
    cout << e1;



    return 0;
}