# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main(){
    struct node *ptr,*p,*head;
    int ch;
    int info;
    int index;
    while (1)
    {
        printf("*****index*****\n");
        printf("1.traverse\n");
         printf("2.enter data\n");
         printf("3.delete at fast\n");
         printf("4.delete at index\n");
         printf("5.delete at end\n");
         printf("enter the choice\n");
         scanf("%d",&ch);
         switch (ch)
         {
        case 1:
         ptr=head;
            while (ptr!=NULL)
            {
                printf("element :%d\n",ptr->data);
                ptr=ptr->next;
            }
             
             break;
         case 2:

         printf("enter data\n");
         scanf("%d",&info);
         ptr=(struct node*)malloc(sizeof(struct node));
         ptr->data=info;

         if(head!=NULL){
             ptr->next=head;
         }
         else
         {
             ptr->next=NULL;
         }
         head=ptr;

         break;

         case 3:
         ptr=head;
         head=head->next;
         free(ptr);
         break;

         case 4:
         printf("enter index where you want to delete");
         scanf("%d",&index);
         ptr=head;
         p=head->next;
         for(int i=0;i<index-1;i++)
         {
             ptr=ptr->next;
             p=p->next;
         }
         ptr->next=p->next;
         free(p);
         break;

         case 5:
         ptr=head;
         p=head->next;
         while (p->next!=NULL)
         {
             ptr=ptr->next;
             p=p->next;

         }
         ptr->next=p->next;
         free(p);

         

         default:
           printf("enter the valid choice");
             break;
         }

    }
    
}