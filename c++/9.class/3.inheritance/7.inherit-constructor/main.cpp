#include "person.h"
#include "engineer.h"
#include <iostream>

int main()
{

    std::cout << "================" << std::endl;

    // Here base class constructor (Person()) will be called only if derived class do not have its own constructor
    // the member variable (stream) of derived class (engineer) will contain junk value in case of calling base class constructor 
    Engineer e1("Neelanya", 3);
    // Engineer e1("Neelanya", 3, "stream"); //throw error
    std::cout << e1 << std::endl;

    return 0;
}
