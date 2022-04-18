# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insertAtFirst(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr; 

}
struct node *insertAtEnd(struct node *head,int data)
{
  struct node *ptr=(struct node*)malloc(sizeof(struct node));
  struct node *p=head;
  while (p->next !=NULL)
  {
    p=p->next;
    }
  p->next=ptr;
 ptr->next=NULL;
  ptr->data=data;
  return head;
  

}
struct node linkedlisttraversal(struct node *ptr)
{
        while (ptr!=NULL)
        {
           printf("Element : %d\n",ptr->data);
           ptr=ptr->next;
        }
        
}
struct node *insertAtIndex(struct node *head,int data,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head ;
    int i=0;
     
    while (i!=index-2)
    {
       p=p->next;
       i++;
    }
    ptr->data=data;
    ptr->next=p->next;  
    p->next=ptr;
    return head;
 
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head =(struct node*)malloc(sizeof(struct node));
     second =(struct node*)malloc(sizeof(struct node));
      third =(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=11;
    third->next=NULL; 

    linkedlisttraversal(head);

   head=insertAtIndex(head,98,2);
   // head=insertAtEnd(head,78)
  
    linkedlisttraversal(head);

    

}
