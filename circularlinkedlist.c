# include<stdio.h>
# include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
//bunty chauhan
int main(){
struct node *ptr ,*head,*p;
    int ch;
    int info;

    while (1)
    {
        printf("****MENU****\n");
        printf("1.traverse\n");
        printf("2.insert at first\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        
            ptr=head;
            
            do
            {
            printf("element :=%d",ptr->data);
            ptr=ptr->next;
            } while (ptr!=head);
            break;
           

        case 2:
            printf("enter the data\n");
            scanf("%d",&info);
            ptr=(struct node*)malloc(sizeof(struct node));
            
             p=head; 
            
            if(head==NULL){
                p->next=p;
                head=p;
            }
         while (p->next!=head)
         {
           p=p->next;    
            }
           ptr->data=info;
            p->next=ptr;
            ptr->next=head;
            head=ptr;
            
            break;
        case 3:
          exit(1);

        default:
            break;
        }
        
    }
    
}