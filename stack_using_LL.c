#include<stdio.h>
#include<stdlib.h>
void push ();
void pop ();
void disp();
typedef struct{
    int data;
    struct stack *next;
}
stack;
struct stack *top=NULL;
void main(){
    int ch;
   
    while(1){
         printf("\n --- Options are:--- ");
        printf("\n1- push ");
        printf("\n2- pop ");
        printf("\n3- display ");
        printf("\n4- Exit:  ");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
    
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: disp();
            break;
            case 4: exit(0);
            default: printf("\n Wrong choice ");

        }
    }
}
void push(){
    stack *ptr;9
    ptr=(stack*)malloc(sizeof(stack));
    printf("\nenter data");
     scanf("%d", &ptr->data);
     ptr->next=NULL;
     if(top==NULL)
     top=ptr;
     else{
        ptr->next=pop;
        top=ptr;
     }
}


void Isempty(){
    if(top==NULL)
    printf("\n stack is empty");
    else
    printf("\n stack is not empty")
    


}