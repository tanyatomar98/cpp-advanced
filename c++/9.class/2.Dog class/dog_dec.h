#ifndef DOG_DEC_H
#define DOG_DEC_H

#include <iostream>

class Dog{
    private:
    std::string name;
    std::string breed;
    int *p_age = nullptr;

    public:
    Dog() = default;
    Dog(std::string n_dog, std::string b_dog, int a_dog);

    // getter
    std::string get_name();
    std::string get_breed();
    int *get_age(); //return a pointer may let the client to change tha value inside the object without setter
    //so do not return pointer 

    //setter
    void set_name(std::string n_dog);
    void set_breed(std::string b_dog);
    void set_age(int age);

    //destructor
    ~Dog();


};


#endif