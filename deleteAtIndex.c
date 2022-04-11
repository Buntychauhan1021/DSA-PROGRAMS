# include<stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node * next;

};
struct node linkedlisttraversal( struct node * ptr)
{
    while (ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next; 
    }
}

    struct node *deleteAtIndex(struct node *head,int index){
     struct node *p=head;
     struct node *q=p->next;

     for (int i = 0; i < index-1; i++)
     {
         p=p->next;
         q=q->next;
     }
     p->next=q->next;
     free(q);
     return head;
     
    }



int main(){
   struct node * head;
    struct node * second;
     struct node * third;
      struct node *four;
head=(struct node *)malloc(sizeof(struct node*));
second=(struct node *)malloc(sizeof(struct node*));
third=(struct node *)malloc(sizeof(struct node*));
four=(struct node *)malloc(sizeof(struct node*));
head->data=7;
head->next=second;

second->data=5;
second->next=third;

third->data=9;
third->next=four;

four->data=11;
four->next=NULL;
printf("linked before delete\n");
linkedlisttraversal(head);

head=deleteAtIndex(head,2);

printf("linked after delete\n");
linkedlisttraversal(head);

     
}