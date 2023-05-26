#include <iostream>
using namespace std;

int main()
{
    /*

    lambda function ->
      [capture list](argument list) -> return type {
        function body
      }();
      //last parenthesis can call the function directly -> they can avoid

    */

    // lambda function name
    auto func = [](int a, int b)
    {
        cout << "addition: " << a + b << endl;
    };

    cout << "======" << endl;

    // anonymous function call directly using parenthesis at last of brackets
    []()
    {
        cout << "hello world!" << endl;
    }();

    cout << "=======" << endl;

    //
    [](double a, double b)
    {
        cout << "Addition: " << a + b << endl;
    }(2.9, 9.5);

    cout << "======" << endl;

    // lambda function with name and can not be called directly
    auto func2 = [](double a, double b)
    {
        cout << "Addition: " << a + b << endl;
    };

    func2(2.9, 4.5);

    cout << "======" << endl;
    // lambda function with return type
    auto func3 = [](string str1, string str2) -> string
    {
        return str1 + str2;
    };

    string res_str = func3("hello miss", " world");
    cout << "final_string (res_str): " << res_str << endl;

    cout << "=========" << endl;

    int c{41};
    auto func4 = [c]()
    {
        cout << "value of c(inner): " << c << endl; // keeps the copy of c - capture by value
    };

    auto func5 = [&c]()
    {
        cout << "value of c(inner): " << c << endl; // refrence c is used - capture by refrence
    };

    for (size_t i{}; i < 5; i++)
    {
        cout << "value of c(outer): " << c << endl; 
        func5();
        c += 5;
    }

    cout << "=======" << endl;
    int k {21};
    
    // [=] allow access to all accessible value present in program -> by value
cout << "func6" << endl;

    auto func6 = [=]() 
    {
        cout << "value of k(in function): " << k << endl;
    };
    for (size_t i{}; i < 5; i++)
    {
        cout << "value of k(outer): " << k << endl; 
        func6();
        k += 5;
    }

    cout << "func7" << endl;
    
    // [&] allow access to all accessible value present in program -> by  refrence
    auto func7 = [&]() 
    {
        cout << "value of k(in function): " << k << endl;
    };
    for (size_t i{}; i < 5; i++)
    {
        cout << "value of k(outer): " << k << endl; 
        func7();
        k += 5;
    }

    

    return 0;
}