#include <iostream>
#include <vector>
using namespace std;

// Vectors -> dynamic array
// if array is full then new array of double size is created in which all elements are stored
// vectors consume more memory to grow dynamically in efficient manner as compare to array

int main()
{
    //////////////////////   INITIALIZE   ///////////////////////
    
    vector<int> initVector(5, 2); // 5 -> size of vector , 2-> initialize all elements with 1 (default value is 0)
    cout << "Initialize vector : ";
    for (auto i = initVector.begin(); i != initVector.end(); i++)
    {
        cout << *i << " ";   // i holds the address of element in vector
    }
    cout << endl;

    /////////////////////// INITILIAZE  ///////////////////////

    vector<int> copyVector(initVector); // copy the elements of initVector to this
    cout << "Copy vector : ";
    for (auto i = copyVector.rbegin(); i != copyVector.rend(); i++)
    {
        cout << *i << " ";   // i holds the address of element in vector
    }
    cout << endl;

    /////////////////////  OPERATIONS = CAPACITY & SIZE ////////////////////////

    vector<int> v;                            // declare and initialize empty array/vector
    cout << "size: " << v.capacity() << endl; // capacity of array - 0

    v.push_back(1);
    cout << "size: " << v.capacity() << endl; // capacity of array - 1

    v.push_back(11);                          // capacity returns the
    cout << "size: " << v.capacity() << endl; // capacity of array - 2

    v.push_back(21);                          // keep doubling the capacity of array to store new elements
    cout << "size: " << v.capacity() << endl; // capacity of array - 4

    v.push_back(31);
    cout << "size: " << v.size() << endl;

    // size -> return total no. of elements in array
    // capacity -> return the memory allocated to the array

    /////////////////////  OPERATIONS = FRONT & BACK ////////////////////////

    cout << "Front Element : " << v.front() << endl;     // front element
    cout << "Back Element : " << v.back() << endl;       // last element
    cout << "Element at index(2) : " << v.at(2) << endl; // element at index 2

    /////////////////////  OPERATIONS = REMOVE  ////////////////////////

    cout << "before pop : " ;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // v.pop_back() -> remove element from back side of array
    // v.pop_front() -> remove element from front side of array

    v.pop_back();
    cout << "After pop : ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    /////////////////////  OPERATIONS = CLEAR ////////////////////////

    cout << "Size of array before clear: " << v.size() << endl;

    v.clear(); // wipe out all the elements from the array

    cout << "Size of array after clear: " << v.size() << endl;

    /////////////////////  OPERATIONS = RESIZE ////////////////////////

    cout << "Capacity of vector after clear: " << v.capacity() << endl;

    for(int i=0; i<10; i++)
    {
        v.push_back(i*10);
    }


    cout << "Elements of vector: ";  // 0 10 20 30 40 50 60 70 80 90
    for(auto it=v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Size of vector before resize: " << v.size() << endl;
    v.resize(6);
    cout << "Size of vector after resize: " << v.size() << endl;

    cout << "Elements of vector after resize: "; // 0 10 20 30 40 50
    for(auto it=v.rbegin(); it != v.rend(); it++)
    {
        cout << *it <<" " ;
    }
    cout << endl;

    cout << "Capacity of vector after resize: " << v.capacity() << endl;
    v.shrink_to_fit();
    cout << "Capacity of vector after shrink: " << v.capacity() << endl;

    return 0;
}