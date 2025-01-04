#include <iostream>
#include <deque>
using namespace std;

void showDeque()
{
    deque<int> de;

    de.push_back(2);

    for (auto it : de)
    {
        cout << it << " ";
    }
}

int main()
{
    showDeque();
}