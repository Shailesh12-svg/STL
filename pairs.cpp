#include <iostream>
#include <utility>
using namespace std;

void printpair()
{
    // Simple pair
    pair<int, int> p(1, 3);
    cout << "Simple Pair: " << p.first << " " << p.second << endl;

    // Nested pair
    pair<int, pair<int, int>> m(1, make_pair(2, 3));
    cout << "Nested Pair: " << m.first << " " << m.second.first << " " << m.second.second << endl;

    // Array
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

int main()
{
    printpair();
    return 0;
}
