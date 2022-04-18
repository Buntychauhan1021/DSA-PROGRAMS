# include<stdio.h>
# include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};
void *createEmptyList(struct node *head)
{
    head=NULL;
}
void *insertAtFirst(struct *head ,int data)
{
   struct node *ptr=(struct node *)malloc(sizeof(struct node));
   ptr->data=data;
   if (head==NULL)
   {
       ptr->next=NULL;

   }
   else
   {
       ptr->next=head;
       head=ptr;
   }
   
}
void *createEmptyList(struct node *head);
void traverseInOrder(struct node *head);
struct node *insertAtFirst(struct *head ,int data);
void main(){
    struct node *head;
    int choice,data;
    createEmptyList( head);
    while (1)
    {
    printf("operation avaliable are\n");
    printf("1. insert in start\n");
    printf("2.traverse\n");
    scanf("%d",&choice);
    if(choice==3){
        break;
    }
    switch (choice)
    {
    case 1:
        printf("enter data");
        scanf("%d",&data);
        insertAtFirst(head,data);
        break;
    case 2:
       if(head==NULL)

       printf("\nlist is empty");
       else

       traverseInOrder(head);

    
    default:
        break;
    }
    }
    
}
