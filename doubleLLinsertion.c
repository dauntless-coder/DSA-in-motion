#include <stdio.h>
#include <stdlib.h>
typedef struct node {
int data;
struct node *prev;
struct node *next;

}
node;
void ins_beg();
void ins_end();
void ins_loc();
void display(); 
struct node *head= NULL; 
struct node *tail= NULL;

void ins_beg(){
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("Enter data: \n ");
    scanf("%d", &ptr->data);
    ptr->prev=NULL;
    ptr->next=NULL;
    if(head==NULL)
    head=tail=ptr;
    else{
        ptr->next=head;
        head=ptr;
    }
    }
    void ins_end(){
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("Enter data: \n ");
    scanf("%d", &ptr->data);
    ptr->next=NULL;
    ptr->prev=NULL;
    if(head==NULL)
    head=tail=ptr;
    else{
ptr->prev= tail;
tail->next= ptr;
tail=ptr;
}
}
void ins_loc(){
    if(head==NULL)
    printf("\ncreate the list");
    else {
        int i,k;
        node *ptr, *temp1, *temp;
        temp=head;
        ptr=(node*)malloc(sizeof(node));
        printf("enter the data you want to insert \n");
        scanf("%d", &ptr->data);
        ptr->prev= NULL;
        ptr->next=NULL;
        printf("Enter the location: \n ");
        scanf("%d", &k);
        for(i=1; i<k; i++)
        {
            temp1= temp;
            temp= temp->next;

        }
        ptr->prev=temp1;
        ptr->next=temp;
        temp1->next=ptr;
        temp->prev= ptr;

}
    }

void display(){
    node *temp;
    temp=head;
    if(temp==NULL)
    printf("List is empty\n");
    else {
        printf("You have entered the following data");

        while(temp!=NULL){

        printf("%d", temp->data);
        printf("\n");
        temp=temp->next;

        }

    }
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