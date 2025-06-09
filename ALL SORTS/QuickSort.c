#include <stdio.h>

// Function prototypes
void QuickSort(int a[], int lb, int ub);
int partition(int a[], int lb, int ub);
void swap(int *x, int *y);

int main()
{
    int a[50]; 
    int n, i;

    // Input array size
    printf("Enter size: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // QuickSort function call
    QuickSort(a, 0, n - 1);

    // Output sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}

// Function to swap two elements
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Partition function
int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];  // Choosing first element as pivot
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (start <= ub && a[start] <= pivot)  // Move right if element <= pivot
        {
            start++;
        }

        while (end >= lb && a[end] > pivot)  // Move left if element > pivot
        {
            end--;
        }

        if (start < end)
        {
            swap(&a[start], &a[end]);
        }
    }

    swap(&a[lb], &a[end]); // Place pivot at the correct position
    return end;
}

// QuickSort function
void QuickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);  // Get partition index
        QuickSort(a, lb, loc - 1);       // Sort left subarray
        QuickSort(a, loc + 1, ub);       // Sort right subarray
    }
}
