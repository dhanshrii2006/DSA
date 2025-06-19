#include <bits/stdc++.h>
using namespace std;

// Demonstrates std::set: unique, sorted, O(log n) ops.

// A set is a collection of unique elements, sorted by default.
// It allows for fast lookup, insertion, and deletion of elements.
// The time complexity of these operations is O(log n), where n is the number of elements in the set.


void explainSet() {
    set<int> st;
    st.insert(1);     // {1}
    st.emplace(2);    // {1,2}
    st.insert(2);     // duplicate ignored → {1,2}
    st.insert(4);     // {1,2,4}
    st.insert(3);     // {1,2,3,4}

    cout << "Contents: ";
    for (int x : st) cout << x << ' ';
    cout << "\n";

    cout << "find(3): ";

    auto it = st.find(3); // returns an iterator to 3 if found, or end() if not found


    if (st.find(3) != st.end()) cout << "found\n";
    else                       cout << "not found\n";

    cout << "count(2)=" << st.count(2)
         << ", count(5)=" << st.count(5) << "\n";

         //erase() removes elements by value
         st.erase(2);     // {1,3,4}
    st.erase(2);      // removes key 2


    cout << "After erase(2): ";
    for (int x : st) cout << x << ' ';
    cout << "\n";

// count and insert
    cout << "Size: " << st.size() << "\n"; // prints number of elements (3)
    cout << "Empty: " << st.empty() << "\n"; // prints 0 (false), since set is not empty

    // clear() removes all elements
    st.clear(); // now set is empty
    cout << "After clear, size: " << st.size() << "\n"; // prints 0

}

int main() {
    explainSet();
    return 0;
}
