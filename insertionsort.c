
//shifting elements greater than key element one position ahead to right
#include<stdio.h>
void main(){
    int n, key, k, i, j;
    printf("\nEnter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter data in array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    // Insertion Sort logic
    for(k=1; k<n; k++){
        key= a[k];
        j = k-1;
        // Move elements greater than key one position ahead
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    printf("\nSorted array is: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
