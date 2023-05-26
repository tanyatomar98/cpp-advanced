#include <iostream>
using namespace std;

class Person{
    private:
    string name;
    size_t num_of_car;
    int *age = nullptr;
    short int num_of_house;

    public:
    Person() = default;
    Person(string name, size_t num_of_car, int age, short int num_of_house)
    {
        this->name = name;
        this->num_of_car = num_of_car;
        this->age = new int(age);
        this->num_of_house = num_of_house;
    }

};

int main()
{
    Person p1("tanya", 1, 21, 1);
    cout << "Sizeof(size_t): " << sizeof(size_t) << endl;
    cout << "Sizeof(string): " << sizeof(string) << endl;
    cout << "Sizeof(int*): " << sizeof(int*) << endl;
    cout << "Sizeof(short int): " << sizeof(short int) << endl;
    cout << "Sizeof(p1): " << sizeof(p1) << endl;


    return 0;
}