#include <bits/stdc++.h>
using namespace std;

// Demonstrates std::map: unique sorted key→value, O(log n) ops.
// keys are unique and sorted and can be accessed by their index and can be of any type
//values can be duplicated and can be of any type

void explainMap() 
{
    map<int,int> mp;    //<int, int> is the type of the map, where
                        // the first int is the key and the second int is the value
    mp[1] = 2;             // inserts {1→2}
    mp.emplace(3,1);       // {1→2,3→1}
    mp.insert({2,4});      // {1→2,2→4,3→1}
    mp[2] = 10;            // overwrites 2→4 with 2→10

    cout << "Map contents:\n";
    for (auto &p : mp)
        cout << "  " << p.first << " → " << p.second << "\n";

    cout << "mp[5] (default)= " << mp[5] << "\n";  // inserts 5→0
    cout << "count(3)= "   << mp.count(3) << "\n"; // 1 or 0

    auto it = mp.find(3);
    if (it != mp.end())
        cout << "find(3)→" << it->second << "\n";

        // empty the map and clear the map
    mp.clear();
    cout << "After clear, size=" << mp.size() << "\n";  

    //swapping two maps
    map<int, int> mp2;  
    mp2[1] = 5;             // inserts {1→5}
    mp2[2] = 10;            // inserts {1→5, 2→10}  
    cout << "Before swap, mp2 contents:\n";
    for (auto &p : mp2)
        cout << "  " << p.first << " → " << p.second << "\n";
    mp.swap(mp2);          // swaps contents of mp and mp2
    cout << "After swap, mp contents:\n";
    for (auto &p : mp)
        cout << "  " << p.first << " → " << p.second << "\n";
    cout << "After swap, mp2 contents:\n";  
    

}








int main() {
    explainMap();
    return 0;
}
