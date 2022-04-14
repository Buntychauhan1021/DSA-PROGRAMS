# include<stdio.h>
# include<stdlib.h>
struct node {
    int data;
    struct node *next;

};

struct node traverse(struct node *ptr)
{
    while(ptr != NULL){
    printf("Element : %d\n",ptr->data);
    ptr=ptr->next;
}
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

    head->data=90;
    head->next=second;

    second->data=45;
    second->next=three;

    three->data=67;
    three->next=four;

    four->data=40;
    four->next=NULL;
//   int n;
//     printf("enter the choice\n");
//     scanf("%d",n);
//    switch(n){
//        case 1:
       printf("traverse\n");
       traverse(head);
   //    break;

    //    default:
    //    printf("enter valid choice\n");
    //    break;

       
   // }
}