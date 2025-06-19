#include <bits/stdc++.h>
using namespace std;

// Function to extract and print digits
void extractDigits(int num)
 {
  
    while (num > 0) 
    {
        // Get the last digit
        int LD = num % 10;
        cout << LD << " ";

        // remove left digits
        num = num / 10;

    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    extractDigits(number);

    return 0;
}

/*
example input: 7789
dry run:
Enter a number: 7789
7789 > 0
7789 % 10 = 9 last digit
7789 / 10 = 778 remaining number

778 > 0
778 % 10 = 8 last digit     
778 / 10 = 77 remaining number

77 > 0
77 % 10 = 7 last digit      
77 / 10 = 7 remaining number

7 > 0
7 % 10 = 7 last digit
7 / 10 = 0 remaining number

0 > 0
End of extraction

% works like mod operator, it gives the remainder of the division
/ works like integer division, it gives the quotient of the division
The last digit is always obtained by taking the number modulo 10, and the remaining number is obtained by performing integer division by 10.
The process continues until the number becomes 0, at which point all digits have been extracted and printed.

time complexity: O(log10 n) where n is the number of digits in the input number
log10 n is the number of times we can divide the number by 10 before it becomes 0, which is equivalent to the number of digits in the number.

log is used because no of iterations depends on division
 here we are dividing the number by 10 in each iteration, and the number of digits in a number is logarithmic to its value.

*/