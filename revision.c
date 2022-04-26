# include <stdio.h>
# include <stdlib.h>

 
typedef struct nodetype{
    int info;
    struct nodetype *next;
}node;  
void insertAtBeg(node **head,int data);
void traverse(node *head);

void main()
{
    int data,ch;
    node *ptr,*p,*head=NULL;
    
    while(1){
      
    printf("1.insert at begning\n");
    printf("2.traverse\n");
    printf("3.insert at end\n");
    printf("4.insert at index\n");
    printf("enter the choice\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter a data\n");
        scanf("%d",&data);
        insertAtBeg(&head,data);
        printf("successfully entered\n");
        break;
     case 2:
	  traverse(head);
      break;
        case 3:
        exit(1);
        break;
       
         default:
        printf("hii\n");   
		break;
    }

      
}
}
void insertAtBeg(node **head,int data){
    node *temp;
    
    
    temp=(node *)malloc(sizeof(node));
	temp->info=data;
    if(*head!=NULL){
        temp->next=*head;
    }
    else
	{
        temp->next=NULL;
    }
    *head=temp;
    }
void traverse(node *head)
{
	node *temp;
    temp=head;
	while(temp!=NULL){
    printf("element : %d\n",temp->info);
    temp=temp->next;
	}
	 
}