#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    // Take the size of the array as input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Take the array elements as input
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort algorithm
    for (k = 1; k <= n; k++) {
        // Last i elements are already sorted
        for (i = 0; i <= n - k; i++) {
            // Swap if the element found is greater than the next element
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i+ 1];
                arr[i+ 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: \n");
    for (k = 1; k <= n; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}

