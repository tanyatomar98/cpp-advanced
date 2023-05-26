#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
private:
    double area;

public:
    Rectangle() = default;

    Rectangle(double val)
    {
        this->area = val;
        cout << "Constructor invoked for area:" << this->area << endl;
    }

    ~Rectangle()
    {
        cout << "Destructor invoked for area: " << this->area << endl;
    }

    void print()
    {
        cout << "Area: " << this->area << endl;
    }
};

// read follow->  https://betterprogramming.pub/smart-pointers-in-cpp-708486276526
// https://www.educative.io/answers/what-are-smart-pointers

int main()
{
    // rec1 --------------------------> Rectangle(1.1)
    shared_ptr<Rectangle> rec1 = make_shared<Rectangle> (1.1);
    rec1->print();

    shared_ptr<Rectangle> rec1_copy = rec1; // shared_ptr allow copy of ptrs
    rec1_copy->print();

    rec1_copy.reset();
    // rec1_copy->print(); // rec2_copy gets empty after reset() call
    


    return 0;
}
