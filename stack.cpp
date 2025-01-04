#include <iostream>
#include <stack>
using namespace std;

// Follows LIFO

void showStack()
{
    stack<int> st;

    st.push(2);    // 2
    st.emplace(4); // 42
    st.push(6);    // 642
    st.push(56);   // 56 6 4 2
    st.pop();      // 6 4 2
}

int main()
{

    showStack();
    return 0;
}