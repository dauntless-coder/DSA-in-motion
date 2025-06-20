#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct {
    int front, rear;
    int ele[MAX];
}
queue;
queue q;
void enq();
void deq();
void disp();

void main(){

int ch;
q.front=q.rear=-1;
while(1)
{
    printf("\n Options are " );
    printf("\n 1- Enqueue");
    printf("\n 2- Dequeue");
    printf("\n 3- Display");
    printf("\n 4- Exit");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1: enq(); break;
        case 2: deq(); break;
        case 3: disp(); break;
        case 4: exit(0);
        default: printf("\n Invalid choice!");
    }
}
}
void enq()
{
    int e;
    if((q.front==0)&&(q.rear==MAX-1))
         printf("\n Queue is full");
    else
    {
        printf("\nEnter data:");
        scanf("%d", &e);    
        if(q.front==-1)
            q.front=q.rear=0;
            else if(q.rear==MAX-1)
              {
                for(int i=q.front; i<=q.rear; i++)
                
                    q.ele[i-q.front]=q.ele[i];
                q.rear=q.rear-q.front+1;
                q.front=0;
              }
                      else
                        q.rear++;
                        q.ele[q.rear]=e;
                 
    }     
}