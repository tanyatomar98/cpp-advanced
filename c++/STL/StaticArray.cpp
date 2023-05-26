#include <iostream>
#include <array>
using namespace std;

int main()
{
    // static array in c++ stl
    array<int,5> a = {1,2,3,4,5};

    int size = a.size() ;// return size of array

    for(int i : a) // range based for loop on stl array
    {
        cout << i << endl;
    }

    cout << "Value at index 2 is : " << a.at(2) << endl; // return value at index 2
    
    cout << "Empty or not : " << a.empty() << endl; // return true or false
    
    cout << "First element: " << a.front() << endl; // return first element
    cout << "Last element: " << a.back() << endl; // return last element


    return 0;
}