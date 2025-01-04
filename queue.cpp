#include <iostream>
#include <queue>
using namespace std;

// Follows FIFO FIRST IN FIRST OUT
void showqueue()
{
    queue<int> qe;
    // Here 9 is the last element {front to back}
    qe.push(1); // 1
    qe.push(4); // 1 4
    qe.push(5); // 1 4 5
    qe.push(1); // 1 4 5 1
    qe.push(7); // 1 4 5 1 7
    qe.push(9); // 1 4 5 1 7 9

    qe.pop(); // 1 would be pop out 45179

    // back and front

    cout << qe.back() << endl;  // 9
    cout << qe.front() << endl; // 4
}

int main()
{
    showqueue();

    return 0;
}

// No direct access to the elements in queue