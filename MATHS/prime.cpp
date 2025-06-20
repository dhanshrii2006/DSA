#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) //bool is used instead of int to return true or false i can use int but it will be more complex because i have to return 1 or 0 in int and in bool we have to return true or false
{
    int cnt = 0;

    for (int i = 1; i <= n; i++)
     {
        if (n % i == 0) 
        cnt++;
    }

    // A prime number has exactly two divisors: 1 and itself
    // If the count of divisors is 2, then it is prime
    return cnt == 2;
}

int main() {
    int num;
    cout << "Enter a number to check if prime: ";
    cin >> num;
    if (isPrime(num)) cout << "True\n";

    else cout << "False\n";

    return 0;
}

/*
Dry run:    
Let n = 7
cnt = 0
for (int i = 1; i <= 7; i++) {
    if (7 % i == 0) 
        cnt++; // cnt = 1
    if (7 % 2 == 0)
        cnt++; // cnt = 1   
    if (7 % 3 == 0)
        cnt++; // cnt = 1   
    if (7 % 4 == 0)
        cnt++; // cnt = 1
    if (7 % 5 == 0)
        cnt++; // cnt = 1
    if (7 % 6 == 0)
        cnt++; // cnt = 1
    if (7 % 7 == 0)
        cnt++; // cnt = 2
     A prime number has exactly two divisors: 1 and itself
cout << "True\n"; // Output: True

let n = 10
cnt = 0
for (int i = 1; i <= 10; i++) {
    if (10 % i == 0) 
        cnt++; // cnt = 1
    if (10 % 2 == 0)
        cnt++; // cnt = 2   
    if (10 % 3 == 0)
        cnt++; // cnt = 2   
    if (10 % 4 == 0)
        cnt++; // cnt = 2
    if (10 % 5 == 0)
        cnt++; // cnt = 3
    if (10 % 6 == 0)
        cnt++; // cnt = 3
    if (10 % 7 == 0)
        cnt++; // cnt = 3
    if (10 % 8 == 0)
        cnt++; // cnt = 3
    if (10 % 9 == 0)
        cnt++; // cnt = 3
    if (10 % 10 == 0)
        cnt++; // cnt = 4
     A prime number has exactly two divisors: 1 and itself
     cnt == 2 (false)
cout << "False\n"; // Output: False else statement is executed

*/