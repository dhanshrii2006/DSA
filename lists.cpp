#include <bits/stdc++.h>
using namespace std;

void explainList() {
    list<int> ls;          // Create empty doubly-linked list

    ls.push_back(2);       // Append 2 → {2}
    ls.emplace_back(4);    // Append 4 in-place → {2, 4}
    ls.push_front(5);      // Prepend 5 → {5, 2, 4}

    
    // Typical use: iterate or erase in O(1) given the iterator.
    // A lone emplace_front() without args is invalid,
    // so likely meant to clear or pop_front instead.
    // e.g.: ls.pop_front(); // removes 5 → {2, 4}
}
