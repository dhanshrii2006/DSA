#include <bits/stdc++.h>
using namespace std;

// Function to count the number of digits in a number using logarithm
 int count(int num)
 {
int cnt = 0;

     if (num == 0) 
     {
         return 1; // Special case for 0
     }

    if (num < 0) 
    {
         num = -num; // Convert negative number to positive
     }

     cnt = int (log10(num)) + 1;  //adding int is called typecasting as log10 returns a float value and we need an integer value

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
 dry run: Enter a number: -1
 Number of digits: 1

    Enter a number: 0
    Number of digits: 1

    Enter a number: 12345
    log10(12345) = 4.09151498
    cnt = int(4.09151498) + 1 = 5

    Enter a number: 1000000
    log10(1000000) = 6
    cnt = int(6) + 1 = 7


 */