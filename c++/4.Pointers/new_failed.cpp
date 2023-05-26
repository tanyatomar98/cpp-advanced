#include <iostream>
using namespace std;

int main()
{
    //method 1 to handle
    // nothrow allow program to not kill the program on failing of dynamic memory (new)
    int *ptr = new (nothrow) int[1000000000000];
    if (ptr != nullptr)
    {
        cout << "allocate memory" << endl;
    }
    else
    {
        cout << "allocation failed" << endl;
    }
    delete ptr;
    ptr = nullptr;

    
    // method 2 to handle
    for(size_t i=0; i<10; i++)
    {
        try{
            int *data = new int[1000000000000];
        }catch(exception& err){
            cout << "abortion: " << err.what() << endl;
        }
    }

    return 0;
}