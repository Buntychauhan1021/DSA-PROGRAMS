# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node travarse(struct node *ptr)
{
   while(ptr!=NULL){
       printf("element : %d\n",ptr->data);
       ptr=ptr->next;
   }
}
struct node *deleteAtFirst(struct node *head)
{
  struct node *ptr=head;
  
  head=head->next;
  free(ptr);
  return head;
}
int main(){
   struct node *head;
   struct node *second;
   struct node *three;
   struct node *four;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    three = (struct node*)malloc(sizeof(struct node));
    four = (struct node*)malloc(sizeof(struct node));
  
    
    head->data=9;
    head->next=second;

    second->data=11;
    second->next=three;
    
    three->data=13;
    three->next=four;
    
    four->data=15;
    four->next=NULL;

   printf("linked before delete\n");
   travarse(head);

   head=deleteAtFirst(head);
   printf("linked after delete\n");
   travarse(head);


return 0;




}
