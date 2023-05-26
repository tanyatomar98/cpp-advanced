#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    cout << "C is alphanum: " << isalnum('C') << endl; // c = yes
    cout << "& is alphanum: " << isalnum('&') << endl; // & = no
    cout << "1 is alphanum: " << isalnum('1') << endl; // 1 = yes

    const char str[]  {"tanya46019.8"};

    int i=0;

    //loop for alnum
    cout << "=======" << endl;
    while(isalnum(str[i])) i++;
    cout << "In string tanya460198 " << i << " characters are alphanumeric" << endl;

    i = 0;
    //loop for alpha
    cout << "=======" << endl;
    while(isalpha(str[i])) i++;
    cout << "In string tanya460198 " << i << " characters are alphabetic" << endl;

    //count blank in string
    cout << "=======" << endl;
    int y=0;
    char msg[] {"Hello! I am Manushi Tomar "};
    for(size_t i{}; i < strlen(msg); i++) // strlen does not count null value present at last of string
    {
        if(isblank(msg[i]))
        {
            y++;
        }
    }

    cout << "the number of blanks in strings are: " << y << endl;

    // the number of lower/upper cases
    cout << "=======" << endl;
    char lowercase_str[] {"This is TANYA, a Student."};

    y=0;
    int z=0;
    for(size_t i{}; i<sizeof(lowercase_str); i++) // sizeof also counts null value present at last of string
    {
        if(islower(lowercase_str[i]))
        {
            y++;
        }
        else if(isupper(lowercase_str[i])){
            z++;
        }
    }

    cout << "The number of lower case alphabets in strings are " << y << endl;
    cout << "The number of upper case alphabets in strings are " << z << endl;

    // string compare

    // result 0 -> string matches t==t
    // result +ve -> lhs having bigger value than rhs eg. t>a
    // result -ve -> rhs having bigger value than lhs eg. f<j
    cout << "=======" << endl;
    char comp_str1[] {"znya"};
    char comp_str2[] {"zanyi"};

    cout << "Compare comp_str1 and comp_str2: " << strcmp(comp_str1, comp_str2) << endl; // strcmp do not require string length
    cout << "Compare comp_str1 and comp_str2: " << strncmp(comp_str2, comp_str1, 2) << endl; // strncmp require string lenth

    // find character in string
    char find_char[] {"A good thought can make your today and tomorrow"};
    char search  {'t'} ;
    const char *result = find_char;

    char *res = 0;
    res = strchr(find_char, search);
    cout << res << endl;





    return 0;
}