#include <iostream>
#include <algorithm>
using namespace std;
// Ascending order
void sorting1(int *arr)

{
    int size = 4;
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

// Decreasing
void sorting2(int *arr)
{
    int size = 4;
    sort(arr, arr + size, greater<int>());
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

// My own way for doing these ...
// Suppose we are having a pair of arrays
/*
    1}we need to sort that in ascending order of second elements
    2}if the second element is same Sort it in descending order of first elements

*/

bool comp(pair<int, int> a1, pair<int, int> a2)
{
    if (a1.second < a2.second)
    {
        return true;
    }
    if (a1.second > a2.second)
    {
        return false;
    }
    if (a1.first > a2.first)
    {
        return true;
    }
}

void my_Way()
{

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    int size = 3;

    // sort(a, a + size, comp);
}

int main()
{
    int arr[4] = {1, 5, 3, 2};

    sorting1(arr);
    sorting2(arr);
    my_Way();
    return 0;
}
