#include <iostream>
#include <list>
using namespace std;

void visualisinglist()
{
    list<int> ls(2, 100); //{100 100}

    ls.push_back(2);    //{100 100  2}
    ls.emplace_back(4); //{100 100 2 4}
    ls.push_front(0);   //{0 100 100 2 4}
    ls.push_front(500); //{500 0 100 100 2 4} //Right

    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    visualisinglist();

    return 0;
}