#include <iostream>
using namespace std;

int main() 
{
    // dangling pointer ////////////////////////////////

    // case 1: accessing unintialized pointer
    // int *unint_ptr ;
    // cout << "Unintialized_ptr: " << unint_ptr << endl;
    // cout << "*Unintialized_ptr: " << *unint_ptr << endl;

    // case 2: accessing deleted pointer
    int *ptr {nullptr};
    ptr = new int;
    *ptr = 22;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    
    delete ptr;
    cout << "*ptr(after delete): " << *ptr << endl; // can crash program



    // case 3: multiple pointers pointing to same address
    int *pointer1 {new int(20)};
    int *pointer2 {pointer1};

    cout << "value of pointer1: " << pointer1 << endl;
    cout << "value of pointer2: " << pointer2 << endl;
    cout << "Defrence pointer: " << *pointer2 << endl;

    delete pointer1;
    pointer1 = nullptr;

    cout << "value of pointer2 (after deleting pointer1): " << *pointer2 << endl; // this might crash program

    if(pointer1 != nullptr)
    {
        cout << "*pointer2: " << *pointer2 << endl;
    }
    else{
        cout << "Invalid Address" << endl;
    }

    cout << "Program end well" << endl;


    return 0;
}