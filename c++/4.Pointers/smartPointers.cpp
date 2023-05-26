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

// taking smart ptr as arg in function
void print_info(unique_ptr<Rectangle> rec)
{
    cout << "Call inside Function : ";
    rec->print();
}

// read follow->  https://betterprogramming.pub/smart-pointers-in-cpp-708486276526
// https://www.educative.io/answers/what-are-smart-pointers

int main()
{
    // Raw pointer
    cout << "Raw Pointer" << endl;
    Rectangle *rec1 = new Rectangle(22.5);
    rec1->print();

    cout << "Smart Pointer" << endl;

    // unique ptr exist till the scope(where they are declare) exist in the program. Here rec2 exist till the main() scope exist
    // unique_ptr<Rectangle> rec2(new Rectangle(39.5));
    // rec2 ----------------> Rectangle(39.5);
    unique_ptr<Rectangle> rec2 = make_unique<Rectangle>(39.5); // alias of line 43
    print_info(move(rec2));
    rec2->print();

    // rec2 -------------------> empty
    // rec2_copy --------------> Rectangle(39.5);

    // unique_ptr<Rectangle> rec2_copy = rec2; // error since copy of unique ptr is not allowed
    cout << "\nCopy unique ptr: " << endl;
    unique_ptr<Rectangle> rec2_copy = move(rec2);
    rec2_copy->print();

    // to delete unique_ptr after their use , we can create own scope using curly brackets
    {
        cout << "\nscope starts" << endl;
        unique_ptr<Rectangle> rec2 = make_unique<Rectangle>(0.0);
        rec2->print();

        // passing smart ptr as parameter to function
        print_info(move(rec2));

        cout << "scope ends\n"
             << endl;
    }

    cout << "Main ends here..." << endl;

    return 0;
}