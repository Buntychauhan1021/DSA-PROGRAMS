# include<stdio.h>
# include<stdlib.h>
struct node
{
  int data;
  struct node *next;

};
struct node arraytraversal(struct node *ptr)
{
   while (ptr !=NULL)
   {
    printf("elememt : %d\n",ptr->data);
    ptr=ptr->next;
   }
  
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
int main(){
  struct node *head;
   struct node *second;
    struct node *three;
     struct node *four;
        
        head=(struct node*)malloc(sizeof(struct node));
         second=(struct node*)malloc(sizeof(struct node));
         three=(struct node*)malloc(sizeof(struct node));
         four=(struct node*)malloc(sizeof(struct node));
     
     head->data=11;
     head->next=second;
     
     second->data=12;
     second->next=three;
     
     three->data=13;
     three->next=four;
     
     four->data=14;
     four->next=NULL;

     arraytraversal(head);
     printf("after insertion\n");
    head= insertAtindex(head,78);
    arraytraversal(head);


}


