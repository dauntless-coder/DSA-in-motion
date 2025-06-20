#include <stdio.h>
#include <stdlib.h>
typedef struct node {
int data;
struct node *prev;
struct node *next;
}
node;
void del_beg();
void del_end();
void del_loc();
void display(); 
struct node *head= NULL; 
struct node *tail= NULL;

void create(){
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("\enter the value: ");
    scanf("%d", &ptr->data);
    ptr-> next= NULL;
    ptr->prev=NULL;

    if(head==NULL)
    head=tail=ptr;
    else{
        
       ptr->prev=tail->next;
       tail->next=ptr;
       tail=ptr;
    }
}
void del_beg(){
   
    if(head==NULL)
    printf("\n deletion is not possible");
    else if(head==tail) {
    
       printf("\n The deleted data is: %d", head->data);
       head=tail=NULL;

    }
    else {
        printf("deleted data is: %d", head->data);
        head=head->next;
        head->prev=NULL;

    }
    }
    void del_end(){
   
    if(head==NULL)
    printf("\n deletion is not possible");
    else if(head==tail) {
    
       printf("\n The deleted data is: %d", head->data);
       head=tail=NULL;
    }
else{
    node *temp1,*temp;
    temp=head;
    while(temp->next!=NULL)
{
    temp1=temp;
    temp=temp->next;

}
printf("\n The deleted data is: %d", temp->data);
temp1->next=NULL;
tail=temp1;
}
    }
    void del_loc(){
    
        int i,k;
        node *temp1, *temp;
        temp=head;
        if(head==NULL)
        printf("deletion is not possible\n");
        else{
            printf("enter location to delete:\n");
            scanf("%d", &k);
            for(i=1; i<k; i++){
                temp1=temp;
                temp=temp->next;
            
        }
printf("deleted data is: %d", temp->data);
temp1->next= temp->next;
(temp->next)->prev= temp1;
        }
    }
    void display(){
        struct node*temp;
        temp=head;
        if(temp==NULL)
        printf("\nlist is empty");
        else{
            printf("\nYou have entered following data");
            while(temp!=NULL)
            {
                printf("%d ", temp-> data);
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
        printf("\n1- create the list");
        printf("\n2- deletion at begining");
        printf("\n3- deletion at end");
        printf("\n4- deletion at location ");
        printf("\n5- display:  ");
         printf("\n6- exit:  ");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
    
        switch(ch)
        {
            case 1: create();
            break;

            case 2: del_beg();
            break;
            case 3: del_end();
            break;
            case 4: del_loc();
            break;
            case 5: display();
            break;
            case 6: exit(0);
            default: printf("\n Wrong choice ");

        }
    }
}



