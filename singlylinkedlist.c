# include<stdio.h>
# include<stdlib.h>
 struct node 
 {
     int data;
     struct node *next;

 };
 int main(){
     struct node *ptr ,*head=NULL,*p;
     int info;
     int index;
     int element;
     
     int ch;
     while (1)
     {
         printf("***menu***\n");
         printf("1.insert at begining \n");
         printf("2.traversing\n");
         printf("3.insert at end\n");
         printf("4.enter element after index\n");
         printf("5.search data\n");
         printf("6.insert after element\n");
         printf("7.exit\n");
         printf("enter  the choice\n");
         scanf("%d",&ch);
         switch (ch)
         {
         case 1:
             printf("enter the data\n");
             scanf("%d",&info);
             ptr = (struct node *)malloc(sizeof(struct node));
             ptr->data=info;
             if (head!=NULL)
             {
                 ptr->next=head;
             }

             else
             {
                 ptr->next=NULL;
             }
             
             head=ptr;
             printf("element insert successfully\n");
             break;

    case 2:
             
            ptr=head;
            while (ptr!=NULL)
            {
                printf("element :%d\n",ptr->data);
                ptr=ptr->next;
            }
            break;
            
        case 3:
         printf("enter the data\n");
         scanf("%d",&info);
         ptr=(struct node*)malloc(sizeof(struct node));
         p=head;
          ptr->data=info;
         while (p->next!=NULL)
         {
             p=p->next;
         }
         p->next=ptr;
         ptr->next=NULL;

         
        
         break;

        case 4:

        printf("enter the data\n");
        scanf("%d",&info);
        printf("enter index number where you want to add new node\n");
        scanf("%d",&index);
        ptr=(struct node*)malloc(sizeof(struct node));
        p=head;
        ptr->data=info;
        int i = 0;
        while( i != index-1)
        {
            p=p->next;
            i++;
        }
         ptr->next=p->next;
        p->next=ptr;
       
        break;

        case 5:
        printf("data you want to search \n");
        scanf("%d",&info);
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr=head;

        while (ptr!=NULL)
        {
            if (info==ptr->data)
            {
                printf("data found\n");
                break;
            }
            else
            {
                ptr=ptr->next;
            }
            
        }
        if (ptr==NULL)
        {
        printf("data not found\n");
        }
         break;


         case 6:
         
         printf("Enter element after which you want to insert the element\n");
         scanf("%d",&element);
         ptr=(struct node*)malloc(sizeof(struct node));
         if (head==NULL)
         {
          printf("no element");
         }
         p=head;
         while (p!=NULL)
         {
             if (p->data==element)
            break;
            p=p->next;
             
         }

         if (p==NULL)
         {
            printf("element not found\n");
         }
         else
         {
             printf("enter the data in node\n");
             scanf("%d",&info);
             ptr->data=info;
             ptr->next=p->next;
             p->next=ptr;
             
            break;

         }
         
         





          
         default:
         printf("enter the valid choice\n"); 
             break;
         }
     }
     
 }