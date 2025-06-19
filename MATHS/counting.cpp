#include <bits/stdc++.h>
using namespace std;

// Function to count the number of digits in a number
 int count(int num)
 {
   int cnt = 0;

    while (num > 0) 
    {
        int lastDigit = num % 10;
        cnt++;

        num = num / 10;

    }
   return cnt;
 }

 int main() {
     int number;
     cout << "Enter a number: ";
     cin >> number;

     count(number);

     cout << "Number of digits: " << count(number) << endl;

     return 0;
 }

 /*
 dry run:  
    Enter a number: 7789
    7789 > 0
    7789 % 10 = 9 last digit   
    cnt = 1
    7789 / 10 = 778 remaining number

    778 > 0
    778 % 10 = 8 last digit 
    cnt = 2
    778 / 10 = 77 remaining number  

    77 > 0
    77 % 10 = 7 last digit
    cnt = 3
    77 / 10 = 7 remaining number    

    7 > 0
    7 % 10 = 7 last digit   
    cnt = 4
    7 / 10 = 0 remaining number

    0 > 0
    End of counting
 
 */