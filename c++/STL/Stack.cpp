#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> st;
    st.push("tanya");
    st.push("Tanu");
    st.push("Manushi");

    cout << "Size: " << st.size() << endl;
    cout << "Top element: " << st.top() << endl;
    st.pop();
    cout << "Top element (after pop) : " << st.top() << endl;
    cout << "Size: " << st.size() << endl;
    cout << "Empty or not: " << st.empty() << endl;

    return 0;
}