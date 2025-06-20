#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;   
} node;

node *head, *temp;
void del_beg();
void del_end();
void del_loc();
void display(); 

void del_beg(){
    temp=head;
    head=head->next;
    free(temp); //free the memory of the deleted node   
}


void del_end(){
    node *prev; // Declare prev as a pointer to node
    temp=head;  
    while(temp->next!=NULL){
        prev=temp;  
        temp=temp->next;
    }   
    if(temp==head){ // If there is only one node in the list
        head=NULL; // Set head to NULL
    } else {
        prev->next=NULL; // Set the next of the previous node to NULL
    }

--
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
