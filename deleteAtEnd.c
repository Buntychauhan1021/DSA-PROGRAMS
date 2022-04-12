# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
  
  struct node traversal(struct node *ptr)
  {
      while (ptr!=NULL)
      {
          printf("element : %d\n",ptr->data);
          ptr=ptr->next;
      }
      
  }
  
     struct node *deleteAtEnd(struct node* head)
     {
         struct node *p=head;
     struct node *q=p->next;
     while(q->next!= NULL)
     {
     q=q->next;
     p=p->next;
     }
     
     p->next=q->next;
     free(q);
     return head;

     }

int main(){
    struct node *head;
     struct node *second;
      struct node *three;
       struct node *four;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    three=(struct node *)malloc(sizeof(struct node));
    four=(struct node *)malloc(sizeof(struct node));
    
    head->next=second;
      head->data=11;

       second->next=three;
      second->data=12;

       three->next=four;
      three->data=13;

       four->next=NULL;
      four->data=14;
printf("before traversal :\n");
  traversal(head);

  head =deleteAtEnd(head);
  printf("after traversal :\n");
  traversal(head);

}