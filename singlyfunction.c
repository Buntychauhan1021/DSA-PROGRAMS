# include<stdio.h>
# include<stdlib.h>



typedef struct iklist
{
    int info;
    struct iklist *next;
} node;
void insertAtBeg(node **head,int data);
void traverse(node *head);
void insertAtEnd(node **head, int data);
void insertAtIndex(node **head ,int data,int index);

node *ptr=NULL;
node *temp=NULL;

int main(){

    node *head=NULL;
    int data;
    int ch;
    int index;
    while (1)
    {
    printf("1.insert at begning\n");
    printf("2.traverse\n");
    printf("3.insert at end\n");
    printf("4.insert at index\n");
    printf("enter the choice\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
    printf("enter the data\n");
    scanf("%d",&data);
        insertAtBeg(&head,data);
        break;
    case 2:
    traverse(head);

    case 3:
    printf("enter the data\n");
    scanf("%d",&data);
    insertAtEnd(&head,data);
    break;

    case 4:
    printf("enter tha data\n");
    scanf("%d",&data);
    printf("enter the index\n");
    scanf("%d",&index);
    insertAtIndex(&head,data,index);
    break;
    
    default:
    exit(1);
        break;
    }

    }
    

}
void insertAtBeg(node **head,int data)
{
    temp = (node*)malloc(sizeof(node));
    temp->info=data;
    if (temp!=NULL)
    {
        temp->next=*head;

    }
    else
    {
        temp->next=NULL;
    }
    *head=temp;
    printf("node insert successfully\n");
    
}

void traverse(node *head)
{
    temp=head;
    while (temp!=NULL)
    {
        printf("element : %d\n",temp->info);
        temp=temp->next;
    }
    
}
void insertAtEnd(node **head, int data)
{
   
    
    temp=(node*)malloc(sizeof(node));
    temp->info=data;
    temp->next=NULL;

    if (*head==NULL)
    {
        *head=temp;
        printf("insert node successfully\n");
        return;
    }
     ptr=*head;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    printf("node insert successfully\n");
}
void insertAtIndex(node **head ,int data,int index)
{   
    temp=(node*)malloc(sizeof(node));
    temp->info=data;
    
    if (*head==NULL)
     {
         return;
     }
    ptr=*head;
    int i=0;
    while ( i != index-1)
    {
        ptr=ptr->next;
        i++;
    }
    ptr->next=temp;
    temp->next=ptr->next;
    printf("node insert successfully");


    
    
}