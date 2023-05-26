#include "dog_dec.h"
#include <iostream>

Dog::Dog(std::string n_dog, std::string b_dog, int a_dog){
    std::cout << "Constructor called" << std::endl;
    name = n_dog;
    breed = b_dog;
    p_age = new int(a_dog);
}

//getter
std:: string Dog::get_name(){
    return name;
}

std::string Dog::get_breed(){
    return breed;
}

int *Dog::get_age(){
    std::cout << "&age(in func): " << p_age << std::endl;
    return p_age;
}

//setter
void Dog::set_name(std::string n_dog){
    name = n_dog;
}

void Dog::set_breed(std::string b_dog){
    breed = b_dog;
}

void Dog::set_age(int age){
    *p_age = age;
}

//destructor
Dog::~Dog(){
    delete p_age;
    std::cout << "Destructor called for " << name <<  std::endl;
}

