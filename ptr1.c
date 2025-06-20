

#include<stdio.h>
void  main ()
{
    
int*p;
 int i=5;
    int**k;
    k=&p;
    printf("value of i is %d", i);
    printf("\n address of i is %u", &i);
    printf("\n address of i is %u", p);
    printf("\n address of i is %p", k);
    printf("\n value of k is %u", k);
    printf("\n address of p is %u", k);

}