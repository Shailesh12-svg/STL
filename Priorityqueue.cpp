#include <iostream>
#include <queue>
using namespace std;

// Largest value is always at top
// Not a linear data structure

void showPriQueue()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(10);
    pq.push(10);

    pq.push(1220);
    pq.push(40);
    pq.push(50);

    cout << pq.top();
    pq.pop();
}

// For min value
// priority_queue<int,vector<int>,greater<int>>pq1;

int main()
{
    showPriQueue();
    return 0;
}