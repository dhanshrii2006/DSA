#include <bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> v = {10, 20, 12, 23, 35};

/* a[0] = 10 
    a[1] = 20
    a[2] = 12
    a[3] = 23
    a[4] = 35
*/

    // Erase single element at index 1
    v.erase(v.begin() + 1);    
    v.erase(v.begin()); // Erase first element
    // v is now {12, 23, 35}
    
    


    // Erase elements at indices [2, 4)
    // This means erase elements at index 2 and 3
    v.erase(v.begin() + 2, v.begin() + 4); 
    // v is now {10, 12, 35}



    // Create vector of size 2, each initialized to 100
    vector<int> v2(2, 100);                
    // v2: {100, 100}

    // Insert 300 at front
    v2.insert(v2.begin(), 300);            
    // v2: {300, 100, 100}

    // Insert two 10’s before position 1
    v2.insert(v2.begin() + 1, 2, 10);      
    // v2: {300, 10, 10, 100, 100}


    // Insert another container’s range
    // Insert elements from another vector at the front
    vector<int> copy(2, 50);
    v2.insert(v2.begin(), copy.begin(), copy.end());
    // v2: {50, 50, 300, 10, 10, 100, 100}

// v2 now contains: {50, 50, 300, 10, 10, 100, 100}    
    cout << v2.size();   // prints 7
    v2.pop_back();       // removes last → size is now 6

    //v2 now contains: {50, 50, 300, 10, 10, 100}

// erase
    v2.erase(v2.begin() + 1); // Erase element at index 1
    // v2 is now {50, 300, 10, 10, 100, 100}

    // Swap contents of two vectors
    vector<int> v1 = {10, 20};
    v1.swap(v2);         // v1 now holds v2’s data
    v2.clear();          // v2 becomes empty

    // v2 is now empty
    cout << v2.empty();  // prints 1 (true)


// iteration syntax is   data structure <data type>::iterator

    // Iteration examples:
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";      // Classic iterator
    }
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";      // With auto
    }
    for (auto x : v) {
        cout << x << " ";        // Range-based for
    }



// the vector v now contains: {12, 23, 35}

    // Random-access via iterator arithmetic
    vector<int>::iterator it = v.begin();
    ++it;                        // points to element 1

    cout << *it << " ";     // prints 20
    it = it + 2;                 // skip ahead two more
    cout << *it << " ";  // prints 35

    // Reverse iterators
    auto itRBegin = v.rbegin(); // reverse begin
    auto itREnd   = v.rend();   // reverse end

    // Element access
    cout << v[0] << " "         // direct indexing
         << v.at(0) << " ";     // bounds-checked access
    cout << v.back();           // last element


    // v2 now contains: {50, 50, 300, 10, 10, 100, 100}

// swap and clear
v1.swap(v2);         // swap contents of v1 and v2
v2.clear();          // clear v2

//v1 now contains: {50, 50, 300, 10, 10, 100, 100}
// pop_back 
v1.pop_back();       // remove last element from v2
// v1 now contains: {50, 50, 300, 10, 10, 100}


}
