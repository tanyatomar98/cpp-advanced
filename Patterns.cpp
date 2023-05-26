#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;

    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " " ;
        }
        cout << endl;
    }

    cout << endl << endl << endl;

    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--) {
            cout << " " ;
        }
        for(int k = 1; k <= (i*2)-1; k++) {
            cout << k  ;
        }
        cout << endl;
    }

    return 0;
}