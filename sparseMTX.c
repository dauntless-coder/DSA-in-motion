#include <stdio.h>  
int main()  
{
  int a[3][3], i,j,k=0,c=0;
  printf("Enter matrix elements: \n");
  for(i=0; i<3; i++){  //row and col ke counting k liye
    for(j=0; j<3; j++){
scanf("%d", &a[i][j]);
    } 
  } 
for(i=0; i<3; i++){  //row and col ke counting k liye
    for(j=0; j<3; j++){
        if(a[i][j]!= 0) //count karo non zero ele
        {
            c++;
        }
    }
}
// resulting mtx ko ek 2d arr me store krlete hai
int b[i][j];
for(i=0; i<3; i++){  
    for(j=0; j<3; j++){
 if (a[i][j]!=0){
     
     b[0][k]=i; //row me row ki value store kro
     b[1][k]=j;//col me col ki value store kro
      b[2][k]=a[i][j];// non zero ele ko store
      k++;
 }
    }
}
for(i=0; i<3; i++){  
    for(j=0; j<3; j++){
        printf("%d", b[i][j] );
    }
    printf("\n");

}
}
