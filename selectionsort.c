//n repeatedly finding the minimum (or maximum) element from the 
// Swap the found minimum element with the first element

#include <stdio.h>

int main() {
    int arr[100], n, i, j, minIndex, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort logic
    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Print sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

//n repeatedly finding the minimum (or maximum) element from the 
// Swap the found minimum element with the first element
#include <stdio.h>

int main() {
    int arr[] = {47, 82, 15, 63, 29, 54, 91, 38, 72, 26, 59, 10, 42, 77, 93};
    int n = 15;
    int i, j, min, temp;

    // Selection Sort logic
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Print the sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
