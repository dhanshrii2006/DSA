
/*There are 4 general rules for solving a pattern-based question : 

We always use nested loops for printing the patterns. For the outer loop, we count the number of lines/rows and loop for them.
Next, for the inner loop, we focus on the number of columns and somehow connect them to the rows by forming a logic such that for each row we get the required number of columns to be printed.
We print the numbers inside the inner loop.
Observe symmetry in the pattern or check if a pattern is a combination of two or more similar patterns or not.
Observe symmetry in the pattern or check if a pattern is a combination of two or more similar patterns.
*/


#include <bits/stdc++.h>
using namespace std;
// This code prints a square pattern of asterisks of size n x n
// where n is the input size for each test case.
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// This code prints a right-angled triangle pattern of asterisks
// where the number of asterisks in each row corresponds to the row number.
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// reversed right-angled triangle pattern
//  This code prints a reversed right-angled triangle pattern of asterisks
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// This code prints a right-angled triangle pattern of numbers
// where the numbers in each row correspond to the column number.
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// This code prints a right-angled triangle pattern of numbers
// where the numbers in each row correspond to the row number.
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// This code prints a reversed right-angled triangle pattern of numbers
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// This code prints a pyramid pattern of asterisks
// where the number of asterisks in each row corresponds to the row number.
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "";
        }
        cout << endl;
    }
}

// This code prints a pyramid pattern of numbers
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << i + 1;
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "";
        }
        cout << endl;
    }
}

// reversed pyramid pattern of asterisks
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "";
        }
        cout << endl;
    }
}

// This code prints a diamond pattern of asterisks
// where the number of asterisks in each row corresponds to the row number.

void pattern10(int n)
{
    for (int i = 1; i < 2 * n - 1; i++)

    { int star = i;

        if (i > n)
        {
          star = 2 * n - i;
        }


        for (int j = 1; j <= star ; j++)
        {
            cout << "*";
        }

    
        cout << endl;
    }
}
// This code prints a pattern of alternating 0s and 1s
void pattern11(int n)
{
    int start = 1; // Initialize start to 1 for odd rows

    for (int i = 1; i <= n; i++)
    {

if (i % 2==0)   
        {
            start = 0; // Set start to 0 for even rows
        }
        else
        {
            start = 1; // Set start to 1 for odd rows
        }

        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start; // Toggle between 0 and 1
        }
        cout << endl;
    }
}


     void pattern12(int n)
{ 
      //int spaces = 2*(n-1); // Initialize spaces to 2*(n-1) for the first row
// CALL for space in space and add decrement in last 

    for (int i = 1; i <= n; i++)
    {

    // Print numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

// Print spaces
        for (int j = 1; j <= 2*(n-i) ; j++)
        {
            cout << " ";
        }

        //print numbers again
        for (int j = i ; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
        //spaces -= 2; // Decrease spaces by 2 for the next row
    }
}


void pattern13(int n)
{
    int num = 1; // Initialize num to 1 for the first row


    for (int i = 1; i <= n; i++) //outer loop for rows
    {
       

        for (int j = 1; j <= i; j++) // prints numbers in the row
        {
            cout << num << " ";
            num = num + 1; // Increment num for the next number
        }

        cout << endl;
    }
}

// This code prints a pattern of characters in each row
void pattern14(int n)
{
  
    for (int i = 1; i <= n; i++) //outer loop for rows
    {

       for (char ch = 'A'; ch < 'A' + i; ch++) // prints characters in the row
        {
            cout << ch << " ";
        }
        
        cout << endl;
    }
}


void pattern15(int n)
{
    for (int i = 1; i <= n; i++) //outer loop for rows
    {
        for (char ch = 'A'; ch < 'A' +( n - i + 1); ch++) // prints characters in the row
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}


void pattern16(int n)
{
    for (int i = 1; i <= n; i++) //outer loop for rows
    {
        char ch = 'A' + i; // Initialize ch to the last character of the ro

        for (int j=0; j<=i; j++) // prints characters in the row
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}


void pattern17(int n)
{
for (int i = 1; i <= n; i++) //outer loop for rows
        {
           for (int j = 1; j <= n-i ; j++) //prints odd spaces
        {
            cout << " ";
        }

        //printing character

char ch = 'A';
//breakpoint is used because the pattern is symmetric
        //the breakpoint is the middle of the row, where the character starts to decrease
int breakpoint = ( 2 * i - 1 ) / 2;

        //the first half of the row is incrementing
        //the second half of the row is decrementing
        //the breakpoint is the middle of the row, where the character starts to decrease
 //the formula states that the breakpoint is the middle of the row
        for (int j = 1; j <= 2 * i - 1; j++) //prints characters in the row
        {
           
              cout << ch << " ";

            if (j <= breakpoint) //increment because the pattern is symmetric
            //the first half of the row is incrementing
            ch++;

            else ch--; //decrement because the pattern is symmetric
        }

        for (int j = 1; j <= n - i - 1 ; j++) //prints odd spaces
        {
            cout << "";
        }   
        
            
cout << endl;
    }
}

// 18,19,20,21,22



int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern17(n);
    }
    return 0;
}
