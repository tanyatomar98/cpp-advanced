#include <iostream>
#include "doctor.h"
using doctor_h::Doctor;
using std::ostream;
using std::operator<<;

namespace doctor_h
{
    // ostream& operator<<(ostream& cout, Doctor doctor)
    // {
    //     inaccessible
     
    //     {
    //         cout << "Doctor's Name: " << doctor.full_name << std::endl
    //              << "Age: " << doctor.age << std::endl
    //              <<
    //             // "Address: " << doctor.address // address is inaccessible -> private
    //             "Address: " << doctor.get_address() << std::endl;

    //         return cout;    
    // }
}