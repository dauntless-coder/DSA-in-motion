#include <stdio.h>

int main() {
    int arr[] = {47, 82, 15, 63, 29, 54, 91, 38, 72, 26, 59, 10, 42, 77, 93};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    // Bubble Sort
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

