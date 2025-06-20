#include<stdio.h>

#include<stdlib.h>
void main()
{
int *p, i;

p=(int*)malloc(5*sizeof(int));
printf("enter data ");
for(i=0; i<5; i++)

scanf("%d", &p[i]);
printf("entered data is ");
for(i=0; i<5; i++)
printf("%d", p[i]);
}