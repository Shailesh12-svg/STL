#include <iostream>
#include <map>
using namespace std;

void showMap()
{
    map<char, int> mpp;

    mpp['a'] = 10;
    mpp['b'] = 20;
    mpp['c'] = 30;

    for (auto it : mpp)
    {
        cout << it.first << " ";  // giving me the key for all the values present in the map.. in a sorted order
        cout << it.second << " "; // giving me the values
    }

    // Suppose you are having more than one key...

    map<pair<char, char>, int> mpp2;

    mpp2[{'a', 'b'}] = 200;

    for (auto it : mpp2)
    {
        cout << it.first.first << " " << it.first.second;
        cout << it.second << " ";
    }
    cout << mpp2[{'j', 'm'}] << "endl"; // gives us null / not defined for the keys which are not present in that MAP.

    auto itt = mpp.find(2);
    cout << (itt->second);
}

int main()
{
    showMap();

    return 0;
}