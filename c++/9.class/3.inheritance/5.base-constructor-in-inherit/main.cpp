#include "person.h"
#include "engineer.h"
#include "csEng.h"
#include <iostream>

int main()
{
    Person p1("Tanya tomar", 21);
    std::cout << p1 << std::endl;

    std::cout << "================" << std::endl;

    Engineer e1("Neelanya", 3, "CSE");
    std::cout << e1 << std::endl;

    std::cout << "================" << std::endl;

    CsEng cse1("Tanya tomar", 21,"CSE", "Hacker");
    std::cout << cse1 << std::endl;

    return 0;
}
