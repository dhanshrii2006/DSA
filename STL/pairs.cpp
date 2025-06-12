#include <iostream>
#include <utility> // For std::pair
using namespace std;

void explainPair() {
    // Creating a pair with two integers
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // Creating a nested pair
    pair<int, pair<int, int>> nestedP = {1, {3, 4}};
    cout << nestedP.first << " " << nestedP.second.second << " " << nestedP.second.first << endl;

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

int main() {
    explainPair();
    return 0;
}
// This code demonstrates the use of pairs in C++.
// It includes creating pairs, nested pairs, and an array of pairs.