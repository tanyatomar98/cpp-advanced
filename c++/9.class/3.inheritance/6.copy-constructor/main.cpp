#include "person.h"
#include "engineer.h"
#include "csEng.h"
#include <iostream>

int main()
{
    Person p1("Tanya tomar", 21);
    std::cout << p1 << std::endl;

    Person p2(p1);
    std::cout << p2 << std::endl;

    std::cout << "================" << std::endl;

    Engineer e1("Neelanya", 3, "CSE");
    std::cout << e1 << std::endl;

    Engineer e2(e1);
    std::cout << e2 << std::endl;

    std::cout << "================" << std::endl;

    CsEng cse1("Tanya tomar", 21,"CSE", "Hacker");
    std::cout << cse1 << std::endl;

    CsEng cse2(cse1);
    std::cout << "cse2: " << cse2 << std::endl;

    return 0;
}
