#include "person.h"
#include "engineer.h"
#include "csEng.h"
#include <iostream>

int main()
{

    std::cout << "================" << std::endl;

    // destructors are called in reverse order of constructors
    // destructors call -> downstream to upstream
    // constructors call ->  upstream to downstream 
    CsEng cse1("Tanya tomar", 21,"CSE", "Hacker");
    std::cout << cse1 << std::endl;

    return 0;
}
