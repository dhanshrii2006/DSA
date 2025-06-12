#include <bits/stdc++.h>
using namespace std;

void explainStack() {
    stack <int> st;          // Create an empty stack of ints


    // Stack operations: push, pop, top, size, empty, swap
    

    st.push(1);             // Push 1 → stack is {1}
    st.push(2);             // Push 2 → {2, 1}
    st.push(3);             // Push 3 → {3, 2, 1}
    st.push(3);             // Push another 3 → {3, 3, 2, 1}
    st.emplace(5);          // Construct-and-push 5 → {5, 3, 3, 2, 1}

    //diffrence between push and emplace
    // push() copies the value, while emplace() constructs it in-place 
    // constructs means that it directly creates the object in the stack's memory, avoiding an extra copy.
    // emplace() is more efficient for complex objects, but for simple types like int, both are similar.


    cout << st.top();       // .top() reads the top element (5) but does not remove it
    st.pop();               // .pop() removes the top element → now {3, 3, 2, 1}

    cout << st.top();       // prints the new top (3)
    cout << st.size();      // prints number of elements (4)
    cout << st.empty();     // prints 0 (false), since stack is not empty


    // st1 has 4 elements: {3, 3, 2, 1}
    // st2 is empty: {}       
    // swap two stacks in O(1) by swapping their internal pointers  
    
    stack<int> st1, st2;    
    st1.swap(st2);          // st1↔st2: now each is still empty but swapped
}
