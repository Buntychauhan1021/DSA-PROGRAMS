#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct lklist{
int info;
struct lklist*next;
}node;
void main()
{
int ch;
node *head=NULL,*temp,*ptr;
int data;

while(1)
{
printf("***MENU***\n");
printf("1.insert at beg\n2.Traversing\n 3.insert at end\n 4.searching\n5. insert after element\n6.exit\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter the data\n");
	scanf("%d",&data);
	temp=(node*)malloc(sizeof(node));
	temp->info=data;
	if(head!=NULL)
	{
	temp->next=head;
	}
	else
	{
	temp->next=NULL;
	}
	head=temp;
	printf("node inserted successful");
	break;
case 2:printf("traversing\n");
       temp=head;
       while(temp!=NULL)
       {
       printf("%d",temp->info);
       temp=temp->next;
       }
       break;
case 3:
	temp=head;
	printf("insert the element \n");
	scanf("%d",&data);
	ptr=(node*)malloc(sizeof(node));
	ptr->info=data;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=ptr;
	ptr->next=NULL;
	break;
case 4:
       temp=head;
       printf("data you want to search\n");
       scanf("%d",&data);
       while(temp!=NULL)
       {
       if(data==temp->info)
       {
       printf("data found\n");
       break;
       }
       else
       {
       temp=temp->next;
       }
       }
       if(temp==NULL)
       {
       printf("data not found\n");
       }
       break;
case 5: printf("Enter the element after which you want to insert\n");
	scanf("%d",&data);
	ptr = head;
	if(ptr==NULL)
	{
	printf("No data found");
	break;
	}
	while(ptr!=NULL)
	{
	  if(data == ptr->info)
	  {
	    break;
	  }
	  ptr = ptr->next;
	}

	if(ptr==NULL)
	{
	   printf("Element not found");
	}
	else
	{
	printf("enter the data\n");
	scanf("%d",&data);
	temp=(node*)malloc(sizeof(node));
	temp->info=data;
	temp->next=ptr->next;
	ptr->next=temp;
	printf("node inserted successful");
	}
	break;
case 6: exit(1);
	break;
default:printf("wrong choice");
	break;
}
}
}