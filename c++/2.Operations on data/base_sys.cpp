#include <iostream>
using namespace std;

int main()
{
    int integer {199};
    cout << "Integer (noShowBase)" << endl;
    cout << "dec: " << dec << integer << endl; 
    cout << "hex: " << hex << integer << endl; 
    cout << "oct: " << oct << integer << endl;

    cout << "--------------------" << endl;

    // show base of number system using showbase
    cout << "Integer (show base)" << showbase << uppercase << endl;
    cout << "dec: " << dec << integer << endl; 
    cout << "hex: " << hex << integer << endl; 
    cout << "oct: " << oct << integer << endl; 
     

    return 0;
}