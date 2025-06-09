#include <stdio.h>

void merge(int a[], int lb, int mid, int ub); // Fixed function prototype

int main()
{
    int a[50];
    int n, i;

    printf("enter size: ");
    scanf("%d", &n);

    printf("enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    return 0;
}

void merge(int a[], int lb, int mid, int ub) // Fixed function definition
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int b[50];  // Temporary array for merging

    while (i <= mid && j <= ub)  // Fixed condition
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];  // Fixed assignment
            i++;
        }
        else
        {
            b[k] = a[j]; 
            j++;
        }
        k++;  // Fixed extra increment
    }

    while (i <= mid)  // Copy remaining elements from left subarray
    {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= ub)  // Copy remaining elements from right subarray
    {
        b[k] = a[j];
        j++;
        k++;
    }

    for (k = lb; k <= ub; k++)  // Copy merged elements back to original array
    {
        a[k] = b[k];
    }
}
