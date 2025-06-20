#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct {
    int top;
    int ele[MAX];
}
stack;
stack s;
void push ();
void pop();
void disp();

void main(){
    int ch;
    s.top=-1;
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
    int e;
    if(s.top==MAX-1)
    printf("\n stack is full");
    else {
        printf("\n enter element to push");
        scanf("%d", &e);
        s.top++;
        s.ele[s.top]=e;
    }
}
    void pop() {
        int e;
        if (s.top == -1)
            printf("\n stack is empty");
        else {
            e=s.ele[s.top];
            printf("\n popped element: %d", e);
            s.top--;
        }
    }

    void disp() {
       int top1;
       top1=s.top;
       if(s.top==-1)
        
            printf("\n stack is empty");
        else {
            while(top1!=-1)
            {
                printf("\n %d", s.ele[top1]);
                top1--;

            }
        }
    }

    