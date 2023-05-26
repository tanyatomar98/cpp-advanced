#include <iostream>
using namespace std;

int main()
{
    // float precision -> 7
    // double precision -> 15
    // long double -> greater than all
    //////////////////////////////
    // %g -> give result in %f or %e
    // %e -> scientific notations
    // %lf -> long double
    // %.2f -> for 2 decimal precision
    float float_var {18985638.9872f};
    printf("float_var: %g , size: %zu \n", float_var, sizeof(float_var));

    double double_var {173289756.3975325635726};
    printf("double_var: %e , size: %zu \n", double_var, sizeof(double_var));

    long double long_dbl_var{1222354.294898576137108248021973L};
    printf("long_double_var: %e , size: %zu \n", long_dbl_var, sizeof(long_dbl_var));
    cout << long_dbl_var;

    float init_zero {};
    printf("init_zero: %f , size: %zu\n", init_zero, sizeof(init_zero));

    cout << endl;

    // infinity value
    float infinity_val {float_var / init_zero};
    cout <<"infinity value: " << infinity_val << endl;

    // not a number
    float nan_val {init_zero / init_zero};
    cout <<"not a number: " << nan_val << endl;

    float zero_val {init_zero / float_var};
    cout << "Zero: " << zero_val << endl;

    cout << endl;

    cout << endl;

    return 0;
}