#include <iostream>
#include "cylinder.h"
#include "constants.h"
#include "cylinder_def.h"
using namespace std;

int main()
{
    cout << "==== program started =====" << endl;
    Cylinder cylinder1(10,21);
    cout << "Pi: " << PI << endl;

    cout << "get_radius: " << cylinder1.get_radius() << endl;
    cout << "get_height: " << cylinder1.get_height() << endl;
    cout << "cylinder (volume): " << cylinder1.volume() << endl;

    cylinder1.set_height(12.44);
    cylinder1.set_radius(44.9);
    
    cout << "==== Modify cylinder1 ====" << endl;
    cout << "get_radius: " << cylinder1.get_radius() << endl;
    cout << "get_height: " << cylinder1.get_height() << endl;
    cout << "cylinder (volume modify): " << cylinder1.volume() << endl;


    // cylinder object allocated to memory using pointer
    cout <<endl << "================ cylinder_ptr1 ================" << endl;
    Cylinder *cylinder_ptr1 = new Cylinder(7, 8);

    cout << "get_radius: " << cylinder_ptr1->get_radius() << endl;
    cout << "get_height: " << cylinder_ptr1->get_height() << endl;
    cout << "cylinder (volume): " << cylinder_ptr1->volume() << endl;

    delete cylinder_ptr1;
    cylinder_ptr1 = nullptr;

    return 0;
}