#include <iostream>
using namespace std;

class Book{
    public:
    string title;
    int pages;

    Book(){
        cout << "Constructor called" << endl;
    }

    Book(string title, int pages){
        title = title;
        pages = pages;
    }
};


int main()
{
    cout << "======== Program Started ==========" << endl;
    Book book1 ;
    book1.title = "Jersey";
    book1.pages = 978;
    cout << "title: " << book1.title << endl;
    cout << "pages: " << book1.pages << endl;

    return 0;
}