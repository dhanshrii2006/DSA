#include <bits/stdc++.h>
using namespace std;

// Demonstrates std::multiset: allows duplicates, sorted, O(log n) ops.
void explainMultiSet() {
    multiset<int> ms;

    // Insert elements
    ms.insert(1);    // {1}
    ms.insert(1);    // {1,1}
    ms.insert(1);    // {1,1,1}


    // Insert more elements
    cout << "Initial size=" << ms.size()
         << ", count(1)=" << ms.count(1) << "\n";
// Output: Initial size=3, count(1)=3







//erase elements
    ms.erase(1);     // removes ALL 1s → empty
    cout << "After erase(1), size=" << ms.size() << "\n";

         // Re-populate and erase single via iterator   
    ms.insert(5); ms.insert(5); ms.insert(5);
    auto it = ms.find(5);
    ms.erase(it);    // removes just one 5
    cout << "After erasing one 5, count(5)=" << ms.count(5) << "\n";


// other operations
    ms.insert(2); ms.insert(3); ms.insert(4);
    cout << "Elements in multiset: ";
    for (const auto& elem : ms) {
        cout << elem << " ";  // Output: 2 3 4 5 5
    }
    cout << "\n";

    // Check if an element exists
    if (ms.find(3) != ms.end()) {
        cout << "Element 3 is present.\n";
    } else {
        cout << "Element 3 is not present.\n";
    }

    // Clear the multiset
    ms.clear();
    cout << "After clear, size=" << ms.size() << "\n";
    
}

int main() {
    explainMultiSet();
    return 0;
}
