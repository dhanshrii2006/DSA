#include <bits/stdc++.h>
using namespace std;

void explainPQ() 
{
    // Max-heap by default: largest element at top
    priority_queue<int> pq; 
    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10 (the maximum)
    pq.pop();         // removes 10 → {8, 5, 2}
    cout << pq.top(); // prints 8

    //all other functions are size empty swap clear resize 
    cout << pq.size(); // prints 3 (number of elements)
    cout << pq.empty(); // prints 0 (false), since pq is not empty



    // To create a min-heap (smallest at top), flip the comparator:
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(5);
    minPQ.push(2);
    minPQ.push(8);
    minPQ.emplace(10);

    cout << minPQ.top(); // prints 2 (the minimum)
    minPQ.pop();         // removes 2 → {5, 8, 10}
    cout << minPQ.top(); // prints 5

    // All other functions are similar to max-heap
    cout << minPQ.size(); // prints 3 (number of elements)
    cout << minPQ.empty(); // prints 0 (false), since minPQ is not empty

}
