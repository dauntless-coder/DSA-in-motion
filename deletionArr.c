#include<stdio.h>
void main ()
{
int a[10],n,i, e, k;
printf("enter the no. of elements: ");
scanf("%d", &n);
printf("enter data in array: \n");
for(i=0; i<n; i++){
    scanf("%d", &a[i]);

}
printf("entered data is: \n");
for(i=0; i<n; i++){
    printf("%d", a[i]);

}
printf("\n enter the location: \n");
scanf("%d", &k);
printf("enter the element to be deleted: \n");
scanf("%d", &e);
for(i=k; i<n; i++)
a[i-1]=a[i];
n=n-1;
printf("array after deletion: \n");
for(i=0; i<n; i++){
    printf("%d", a[i]);
}
}