#include <iostream>
using namespace std;

int main ()
{
    //////////////////////////
    // throws warning
    char *str = "Hello World!";
    printf("str: %s \n", str);
    // *str = "t"; compiler error
    printf("*str: %c \n", *str); // H


    // const char would not throw error
    //good practice for 
    // string can not be modify
    const char *const_str = "My World!";
    printf("const_str: %s \n", const_str);

    // string can be modify
    char arr[] {"as soon as possible"};
    printf("Arr_str: %s\n", arr);
    //modify string array
    arr[0] = 'e';
    printf("Arr_str (after modification): %s\n", arr);



    return 0;
}