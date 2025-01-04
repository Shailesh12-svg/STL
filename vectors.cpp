#include <iostream>
#include <vector>
using namespace std;

void printvec()
{

    vector<int> v;
    v.push_back(1);    // 1
    v.emplace_back(2); // 1 2 more faster

    vector<pair<int, int>> vec;

    vec.emplace_back(1, 2);

    vector<int> ves(5, 100);

    vector<int> vez(5);

    vector<int> v1(5, 20);

    vector<int> v2(v1);

    // Accessing elements
    // cout << v[0] << " ";

    // Iterator

    vector<int>::iterator it = vez.begin();
    it++;
    // cout << *(it) << " ";

    // v.end()
    // v.rend()
    // v.rbegin()

    // cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        // cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        // cout << *(it) << " ";
    }

    for (auto it : v)
    {
        // cout << it << " ";
    };

    // OPERATIONS

    // Suppose we have a vector {100 100 100 100}

    vector<int> vfinal(4, 100); //{100 100 100 100}

    // Erase
    // vfinal.erase(v.begin() + 1);

    // for (auto it : vfinal)
    // {
    //     cout << it << " ";
    // }
    // Insert
    vfinal.insert(vfinal.begin() + 1, 12);

    for (auto it : vfinal)
    {
        cout << it << " ";
    }
    cout << vfinal.size();
}

int main()
{
    printvec();

    return 0;
}