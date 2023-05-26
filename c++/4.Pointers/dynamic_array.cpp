#include <iostream>
using namespace std;

int main()
{
    // Bad practice -> writting to unintialized pointer
    int *bad_ptr1; // unintialized ptr
    // segmentation fault 
    // *bad_ptr1 = 21;
    // cout << "*bad_ptr1: " << *bad_ptr1 << endl;

    int *bad_ptr2 {}; //initialized ptr 
    // cout << "bad_ptr2: " << bad_ptr2 << endl;
    // segmentation fault 
    // *bad_ptr2 = 21;
    // cout << "*bad_ptr2: " << *bad_ptr2 << endl;

    //good practice
    // allocating memory to pointer before initializing to value except nullptr
    int *good_ptr1 {nullptr};
    good_ptr1 = new int; //dynamically allocating memory
    *good_ptr1 = 21;
    cout << "*good_ptr: " << *good_ptr1 << endl;

    delete good_ptr1; // release the memory address create in heap dynamically
    good_ptr1 = nullptr; // pointing to nullptr to avoid junk address

    // don't call delete twice -> it kill the program abnormally


    return 0;
}