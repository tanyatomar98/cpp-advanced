#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_front(3);

    cout << "List elements: " << endl;
    for(auto i : li)
    {
        cout << i << " " ;
    }
    cout << endl;

    cout << "List elements (after pop_front): " << endl;
    li.pop_front();
    for(auto i : li)
    {
        cout << i << " " ;
    }
    cout << endl;

    cout << "Size of elements before erase: " << li.size() << endl ;
    li.erase(li.begin()) ; // arg -> iterator is given -> li.erase(li.begin, li.begin() + 2)
    cout << "Size of elements after erase: " << li.size() << endl;

    return 0;
}