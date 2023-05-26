#include <iostream>
using namespace std;

int main()
{
    int scores[] {1,2,3,4,5};   

    for (int score: scores)
    {
        cout << "Score: " << score << endl;
    }

    return 0;
}