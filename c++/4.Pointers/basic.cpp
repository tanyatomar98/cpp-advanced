#include <iostream>
using namespace std;

int main()
{
    // %p -> specifier is used to print pointer value
    // nullptr -> specify that pointer has nill value for now
    int *null_ptr {nullptr};
    printf("ptr: %p \n", null_ptr);
    
    // unintialize ptr is also a nullptr
    int *unintialize_ptr {};
    printf("unintialize_ptr: %p \n", unintialize_ptr );

    int digit {11};
    // unintialize_ptr {&digit} ; // braced assignment throws error for assiging value to ptr
    unintialize_ptr = &digit ;
    printf("unintialize_ptr(assignment_method): %p \n", unintialize_ptr );
    printf("*unintialize_ptr(assignment_method): %d \n", *unintialize_ptr );
    
    float dec_digit = 3.41;

    // braced assignment work at the time of declaration of ptr
    float *initialize_ptr {&dec_digit};
    printf("initialize_ptr: %p \n", initialize_ptr );    
    printf("*initialize_ptr: %f \n", *initialize_ptr );    


    return 0;
}