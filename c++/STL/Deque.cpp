#include <iostream>
#include <deque>
using namespace std;

/*
deque -> insertion / deletion possible from both the ends (front/back)
similiar to vector but insertion and deletion possible from both the ends
access elements -> o(1)
insertion / removal elements -> o(n)
insertion / removal at start/end -> o(1)
*/

int main()
{
    deque <int> de;
    de.push_back(10);
    de.push_back(5);
    de.push_front(0);

    cout << "Elements in deque: " ;
    for(auto i: de)
    {
        cout << i << " ";
    }
    cout << endl;   

    cout << "Size of deque: " << de.size() << endl;
    cout << "Index at 1: " << de.at(1) << endl;
    cout << "Max-Size of deque: " << de.max_size() << endl;  // max elements deque can hold
    de.pop_front();
    cout << "Size of deque (after pop_front) : " << de.size() << endl;
    de.erase(de.begin(), de.begin()+2);
    cout << "Size of deque (after erase) : " << de.size() << endl;


    return 0;
}