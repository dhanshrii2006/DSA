#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2) {
    if (p1.second < p2.second) {
        return true; // sort by second in ascending order
    }
    if (p1.second > p2.second) {
        return false; // sort by second in ascending order
    }
    if (p1.first > p2.first) {
        return true; // if second elements are equal, sort by first in descending order
    }
    return false; // if second elements are equal, sort by first in descending order
}

void explainextra() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a + n);

    // Removed sort(a.begin(), a.end()); because 'a' is an array, not vector

    sort(a + 2, a + 4);

    sort(a, a + n, greater<int>());

    // sort it according to the second element of the pair
    // if second elements are equal, sort according to the first element
    // sort in descending order

    vector<pair<int, int>> v = {{4, 1}, {2, 1}, {1, 2}};
    sort(v.begin(), v.end(), comp);
}

int main() {
    explainextra();
    return 0;
}
