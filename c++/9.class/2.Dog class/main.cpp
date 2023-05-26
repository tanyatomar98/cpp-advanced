#include <iostream>
#include "dog_dec.h"
#include "dog_def.h"
using namespace std;

// destructor is called inside the function for any type of allocation
void create_obj_stack()
{
    cout << "============== stack memory ================" << endl
         << endl;
    Dog cresha("cresha_stack", "jerman seapherd", 1);
    cout << "name: " << cresha.get_name() << endl;
}

void create_obj_heap()
{
    cout << "============== heap memory ================" << endl
         << endl;
    Dog *cresha = new Dog("cresha_heap", "jerman seapherd", 1);
    cout << "name: " << cresha->get_name() << endl;
}

Dog get_dog_param()
{
    Dog doggy("sceza_return", "cuto", 5);
    cout << "name: " << doggy.get_name() << endl;
    return doggy;
}

int main()
{
    cout << "================== Program started ====================" << endl << endl;
    cout << "============== heap memory allocated================" << endl << endl;

    Dog *dog_ptr = new Dog("fluffy_main", "shepherd", 3);
    cout << "name: " << dog_ptr->get_name() << endl;
    cout << "breed: " << dog_ptr->get_breed() << endl;
    // get_age() -> return pointer
    int *age = dog_ptr->get_age();
    cout << "age: " << *age << endl; // 3

    *age = 31; // change the value of real dog obj without setter
    cout << "&age(out func): " << age << endl;
    int *new_age = dog_ptr->get_age(); // 31
    cout << "new_age: " << *new_age << endl;


    // for object stored in stack , destructor called by default
    // stack stored obj gets deleted at the end of the program 
    cout << "============== stack memory allocated================" << endl
         << endl;
    Dog cresha("cresha_main", "jerman seapherd", 1);
    cout << "name: " << cresha.get_name() << endl;

    // create obj inside func -> stack allocation
    //  destructor is called by default
    create_obj_stack();

    // create obj inside func -> heap allocation
    //  destructor is called by default even for heap allocation inside func
    create_obj_heap();

    Dog new_dog = get_dog_param();
    delete dog_ptr;

    
    return 0;
}