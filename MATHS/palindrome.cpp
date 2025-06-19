#include <bits/stdc++.h>
using namespace std;

// Function to reverse of digits in a number
 int palindrome(int num)
 {
   int duplicate = num; // Store the number in a variable 
   int reverse = 0;
    while (num > 0)
     {
        int ld = num % 10;
        reverse = reverse * 10 + ld;
        num /= 10;
    }
    return duplicate == reverse;
 }

 int main() {
     int number;
     cout << "Enter a number: ";
     cin >> number;

     if (palindrome(number))
      {
         cout << number << " is a palindrome." << endl;
     } 
     else {
         cout << number << " is not a palindrome." << endl;
     }

     
     return 0;
 }

 /*
 dry run: 1. take input 121 output should be 121

let num = 121
duplicate = 121
reverse = 0
121 > 0
    ld = 121 % 10 = 1
    reverse = 0 * 10 + 1 = 1
    num = 121 / 10 = 12
    return to while loop
12 > 0
    ld = 12 % 10 = 2    
    reverse = 1 * 10 + 2 = 12
    num = 12 / 10 = 1
1 > 0
    ld = 1 % 10 = 1
    reverse = 12 * 10 + 1 = 121
    num = 1 / 10 = 0
0 > 0 (false)
return duplicate == reverse
121 == 121 (true)
Output: 121 is a palindrome.

 */