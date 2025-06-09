#include <stdio.h>

// Function prototype (parameters should include the array)
void insertion(int a[], int n);

int main() {
    int a[50]; 
    int n, i;

    printf("enter size: ");
    scanf("%d", &n);

    printf("enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertion(a, n); // Call insertion sort function

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

// Insertion Sort function
void insertion(int a[], int n) {
    int i, j, temp;

    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j]; // Fix incorrect assignment
            j--;
        }
        a[j + 1] = temp; // Correct position for the temp value
    }
}
