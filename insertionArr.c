#include<stdio.h>
void main ()
{
int a[10],n,i, e, k;
printf("enter the no. of elements: ");
scanf("%d", &n);
printf("enter data in array: \n");
for(i=0; i<n; i++){
    scanf("%d", &a[i]);

}
printf("entered data is: \n");
for(i=0; i<n; i++){
    printf("%d", a[i]);

}
printf("\n enter the location: \n");
scanf("%d", &k);
printf("enter the element to be inserted: \n");
scanf("%d", &e);
for(i=n; i>=k; i--)
a[i]=a[i-1];
a[k-1]=e;
n=n+1;
printf("array after insertion: \n");
for(i=0; i<n; i++){
    printf("%d", a[i]);
}
}


// void delete_begin()
// {
// 	if (head== NULL)
// 	{
// 		printf("List if Empty, Deletion is not Possible");
// 	}
// 	else
// 	{
// 		ptr=head;
// 		head=head->next;
// 		ptr->next=NULL;
// 		// free(ptr);
// 	}
// }
// void delete_end()
// {
// 	if (head== NULL)
// 	{
// 		printf("List if Empty, Deletion is not Possible");
// 	}
// 	else
// 	{
// 		struct node *p; 
// 		ptr=head;
// 		while(ptr->next != NULL)
// 		{
// 		p=ptr;
// 		ptr=ptr->next;	
// 		}
// 		p->next=NULL;
// 		// free(ptr);
// 	}
// }

// void delete_middle(int ele)
// {
// 	if (head== NULL)
// 	{
// 		printf("List if Empty, Deletion is not Possible");
// 	}
// 	else
// 	{
// 		struct node *p; 
// 		ptr=head;
// 		while(ptr->data != ele)
// 		{
// 			p=ptr;
// 			ptr=ptr->next;
// 		}
// 		p->next=ptr->next;
// 		// free(ptr);
// 	}
// }


// case 4:
				// 	{
				// 	delete_begin();
				// 	display();
				// 	break;
				// }
				// case 5:
				// {
				// 	delete_end();
				// 	display();
				// 	break;
				// }
				// case 6:
				// {
				// 	printf("Enter the element you want to delete");
				// 	scanf("%d",&ele);
				// 	delete_middle(ele);
				// 	display();
				// 	break;
				// }	


                // printf("4. delete_begin \n");
	// printf("5. delete_end \n");
	// printf("6. delete_middle \n");