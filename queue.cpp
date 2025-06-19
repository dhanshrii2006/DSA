#include <bits/stdc++.h>
using namespace std;

void explainQueue() {
    queue<int> q;           // Create an empty queue of ints

    q.push(1);              // Enqueue 1 → queue is {1}
    q.push(2);              // Enqueue 2 → {1, 2}
    q.emplace(4);           // Construct-and-enqueue 4 → {1, 2, 4}



    q.back() += 5;          // Access the last element (4) and add 5 → {1, 2, 9}
    cout << q.back();       // prints 9

    cout << q.front();      // .front() reads the first element (1)
    q.pop();                // .pop() dequeues front → now {2, 9}
    cout << q.front();      // prints new front (2)

    cout << q.size();       // prints the size of the queue (2)
    cout << q.empty();      // prints 0 (false) since queue is not empty

// all other functions are similar to stack
    // q.swap(otherQueue);  // swap contents with another queue
    // q.clear();           // clear the queue
    // q.resize(newSize);   // resize the queue (not applicable for std::queue)
    // q.front() = value;   // modify front element directly
    // q.back() = value;    // modify back element directly

    while (!q.empty()) {   // while loop to empty the queue
        cout << q.front() << " ";  // prints current front
        q.pop();          // removes the front element
    }
    cout << endl;         // prints a newline after emptying the queue

}
