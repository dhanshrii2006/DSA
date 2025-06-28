#include <bits/stdc++.h>
using namespace std;

// Function to reverse of digits in a number
 int reverse(int num)
 {
    int rev = 0;

    while (num > 0) 
    {
        int ld = num % 10;

        rev = rev * 10 + ld;

        num = num / 10;

    }
    return rev;

 }

 int main() {
     int number;
     cout << "Enter a number: ";
     cin >> number;

     reverse(number);
        cout << "Reversed number: " << reverse(number) << endl; 

     return 0;
 }
 /*
 pseudo code: using extraction we get digits in reverse order we use reverse function to reverse the digits of a number
 reverse = reverse * 10 + digit;
 where digit = num % 10; because we get the last digit of a number using modulus operator and we add it to the reverse number 
 
 dry run: enter a number: 7789
    num = 7789

    7789 > 0
    rev = 0
    ld = 9
    rev = 0 * 10 + 9 = 9
    num = 7789 / 10 = 778

778 > 0
    rev = 9
    ld = 8
    rev = 9 * 10 + 8 = 98
    num = 778 / 10 = 77

77 > 0
    rev = 98
    ld = 7
    rev = 98 * 10 + 7 = 987
    num = 77 / 10 = 7

7 > 0
    rev = 987
    ld = 7
    rev = 987 * 10 + 7 = 9877
    num = 7 / 10 = 0

    0 > 0 (false, loop ends)
    return rev = 9877   


    let number = 004
    num = 4 less than 0 or equal to 0 so it will not enter the loop
    so it will return 4 as the reverse number
 */
