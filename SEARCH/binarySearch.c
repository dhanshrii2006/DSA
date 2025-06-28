
#include <stdio.h>

// Function declaration
int Binarysearch(int a[], int n, int data);

int main()
{
    int a[50];
    int n;
    int i;
    int data;

    // Input array size
    printf("Enter size: ");
    scanf("%d", &n);

    // Input array elements (Assuming sorted input for binary search)
    printf("Enter elements (sorted order): ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input the element to search
    printf("Enter element to search: ");
    scanf("%d", &data);

    // Calling Binary Search function
    int result = Binarysearch(a, n, data);

    // Checking result
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
/*
if(result == -1)
{
printf("element not found");
}
*/

    return 0;
}

// Binary Search Function
int Binarysearch(int a[], int n, int data)
{
    int l = 0;
    int r = n - 1;
     int mid;

    while (l <= r)
    {
        mid = (l + r) / 2; //calculated in loop because mid is always updated

        if (data == a[mid])
        {
            return mid; // Element found
        }

        else if (data < a[mid])
        {
            r = mid - 1; // Search in left half
        }

        else
        {
            l = mid + 1; // Search in right half
        }
    }

    return -1; // Element not found
}
