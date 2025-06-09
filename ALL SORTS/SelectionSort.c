#include <stdio.h>

// Function prototypes
void swap(int *x, int *y);
void SelectionSort(int a[], int n);
//wrong void SelectionSort(n,i,min,j);

int main()
{
    int a[50]; 
    int n, i;

    // Input size
    printf("Enter size: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Call SelectionSort
    SelectionSort(a, n);

    // Print sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

// Swap function
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Selection Sort function
void SelectionSort(int a[], int n)
{ 
    int i, j, min;
    
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        // Swap only if the minimum index changed
        if (min != i)
        {
            swap(&a[i], &a[min]);
        }
    }
}
