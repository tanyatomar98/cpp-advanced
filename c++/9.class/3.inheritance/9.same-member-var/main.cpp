#include "parent.h"
#include "child.h"
#include <iostream>

int main()
{
    // child and parent class can have same member variable but whenever child 
    // variable use a member, it bydefault use child class member
    // to use a parent class member , this symbol should be use parent::var_name  
    Child c1(30, 5);
    c1.show_child_value();
    c1.Parent::get_value(); 

    std::cout << "=========================" << std::endl;
    c1.show_value();

    return 0;
}