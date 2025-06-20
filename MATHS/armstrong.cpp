#include <bits/stdc++.h>
using namespace std;

// Function to reverse of digits in a number
 int armstrong(int num)
 {
 int original = num; // Store the original number

    int sum = 0; // Initialize sum to 0

    int digits = (int)log10(num) + 1; // Count digits

    while (num > 0) 
    {
        int digit = num % 10;

        sum = sum + pow(digit, digits); // Raise digit to power of digits
      
        num = num / 10; // Remove last digit because we have already processed it 
    }

    return sum == original;
}


 int main() {
     int number;
     cout << "Enter a number: ";
     cin >> number;

    

     return 0;
 }

 /*
 dry run: let num = 153
 original = 153
    sum = 0
    digits = 3
    153 > 0
        digit = 153 % 10 = 3 remainder is pow(3, )
        sum = 0 + pow(3, 3) = 27 
        n = 153 / 10 = 15

    15 > 0
        digit = 15 % 10 = 5 
        sum = 27 + pow(5, 3) = 27 + 125 = 152
        n = 15 / 10 = 1

    1 > 0
        digit = 1 % 10 = 1  
        sum = 152 + pow(1, 3) = 152 + 1 = 153


        try exchanging pow function
 */