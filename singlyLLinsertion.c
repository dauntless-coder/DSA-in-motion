// // C Program for Implementation of Singly Linked List
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} node;

node *head, *newnode, *temp;
void ins_beg();
void ins_end();
void ins_loc();
void display(); 
struct node *head= NULL; //create a head ptr

void ins_beg(){
    newnode=(node*)malloc(sizeof(node));
    printf("Enter data: \n ");
    scanf("%d", &newnode->data);
    newnode->next=head;
    head=newnode;
}

void ins_end(){
     newnode=(node*)malloc(sizeof(node));
    printf("Enter data: \n ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
     temp->next=newnode;     
}


void ins_loc(){
    int loc, count, i;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter location: \n ");
   scanf("%d", &loc);
   if(loc>count){
    printf("Invalid location\n");
    }
    else{
        temp=head;
        while(i<loc)
        {
            temp=temp->next;
            i++;
        }
    }
    printf("Enter data: \n ");
    scanf("%d", &newnode->data);    
    newnode->next=temp->next;
    temp->next=newnode;
}

  

    
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d-->", temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void main()
{
	
	
   
    int ch;
    while(1)
    {
        printf("\n --- Options are:--- ");
        printf("\n1- Insertion at beginging ");
        printf("\n2- Insertion at end ");
        printf("\n3- Insertion at loc ");
        printf("\n4- Display ");
        printf("\n5- Exit:  ");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
    
        switch(ch)
        {
            case 1: ins_beg();
            break;
            case 2: ins_end();
            break;
            case 3: ins_loc();
            break;
            case 4: display();
            break;
            case 5: exit(0);
            default: printf("\n Wrong choice ");

        }
    }
}
