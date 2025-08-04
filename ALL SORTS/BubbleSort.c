#include <stdio.h>

int main()
{
    int a[50]; 
    int n, i, temp, j, flag;

    // Input array size
    printf("Enter size: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Bubble Sort Algorithm (Optimized)
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;  // Reset flag at the start of each pass
        for (j = 0; j < (n - 1) - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;  // Swap happened
            }
        }
        if (flag == 0) // If no swaps, array is already sorted
        {
            break;
        }
    }

    // Output sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
    
}


