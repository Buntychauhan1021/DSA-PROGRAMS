#include <stdio.h>
#include <stdlib.h>
typedef struct ikList
{
    struct ikList *prev;
    int info;
    struct ikList *next;

} node;

void inserAtFirst(node **head, node **tail, int data);
void inserAtEnd(node **head, node **tail, int data);
void traverseFromBegning(node *head);
void traverseFromEnd(node *tail);
void insertAfterSpecificElement(node *head, node **tail, int data);
void deleteAtFirst(node **head, node **tail);
void deleteAtEnd(node **head, node **tail);
void search(node *head, int data);

node *head = NULL;
node *ptr = NULL;
node *temp = NULL;
node *tail = NULL;

void main()
{
    int data;
    int ch;
    while (ch)
    {
        printf("***MENU***\n");
        printf("1.insert at begning\n");
        printf("2.traverse from begning\n");
        printf("3.insert at end\n");
        printf("4.traverse from end\n");
        printf("5.insert after the element\n");
        printf("6.delete at first\n");
        printf("7.delete at end\n");
        printf("8.search element\n");
        printf("enter the choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter the data\n");
            scanf("%d", &data);
            inserAtFirst(&head, &tail, data);
            break;

        case 2:
            traverseFromBegning(head);
            break;

        case 3:
            printf("enter the data\n");
            scanf("%d", &data);
            inserAtEnd(&head, &tail, data);
            break;

        case 4:
            traverseFromEnd(tail);
            break;

        case 5:
            printf("enter the data\n");
            scanf("%d", &data);
            insertAfterSpecificElement(head, &tail, data);
            break;
        case 6:
            deleteAtFirst(&head, &tail);
            break;
        case 7:
            deleteAtEnd(&head, &tail);
            break;
        case 8:
            printf("enter the element you want to search\n");
            scanf("%d", &data);
            search(head, data);
            break;

        default:
            break;
        }
    }
}
void deletetAfterSpecificElement(node *head, node **tail, int data)
{
    if (head == NULL)
    {
        printf("No data Found\n");
        return;
    }
    while (head != NULL)
    {
        if (head->info == data)
        {
           break;
        }
        head = head->next;
    }
    if (head == NULL)
    {
        printf("Element not found");
        return;
    }
    else
    {  
        if ((head->next)->next==NULL)
        {
           
           temp= head->next;
           head->next=NULL;
           *tail=head;
            free(temp);
        }
        else
        {
            temp=head->next;
            head->next=
        }
        
        // temp->info = data;
        // temp->prev = head;
        // temp->next = head->next;
        // // if (head->next == NULL)
        // // {
        // //     head->next = temp;
        // //     (*tail) = temp;
        // //     printf("Node Insert Successfully\n");
        // //     return;
        // // }
        // head->next = temp;
        // // (temp->next)->prev = temp;
        // // printf("Node Insert Successfully\n");
    }
}

void deleteAtEnd(node **head, node **tail)
{
    if (*head == NULL)
    {
        printf("no element\n");
        return;
    }
    if ((*tail)->prev == NULL)
    {
        free(tail);
        *tail = NULL;
        *head = NULL;
        printf("delete node successfully\n");
        return;
    }
    else
    {
        temp = *tail;
        *tail = (*tail)->prev;
        (*tail)->next = NULL;
        free(temp);
        printf("delete node successfully\n");
    }
}

void search(node *head, int data)
{
    if (head == NULL)
    {
        printf("no element\n");
        return;
    }
    temp=head;
    while (temp != NULL)
    {
        if ( temp->info==data)
        {
            printf("data found\n");
            break;
        } 
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("no element found\n");
        return;
    }
}
void inserAtFirst(node **head, node **tail, int data)
{
    temp = (node *)malloc(sizeof(node));
    temp->info = data;
    temp->prev = NULL;
    if (*head == NULL)
    {
        temp->next = NULL;
        *head = temp;
        *tail = temp;
        printf(" successfully insert at first node \n");
    }
    else
    {
        temp->next = *head;
        (*head)->prev = temp;
        *head = temp;
        printf("node insert successfully\n");
    }
}

void traverseFromBegning(node *head)
{
    temp = head;
    while (temp != NULL)
    {
        printf("element : %d\n", temp->info);
        temp = temp->next;
    }
}

void inserAtEnd(node **head, node **tail, int data)
{
    temp = (node *)malloc(sizeof(node));
    temp->next = NULL;
    temp->info = data;

    if (*head == NULL)
    {
        temp->next = NULL;
        *head = temp;
        *tail = temp;
        printf("delete node successfully\n");
    }
    else
    {
        (*tail)->next = temp;
        temp->prev = *tail;
        *tail = temp;
        printf("insert node successfully\n");
    }
}
void traverseFromEnd(node *tail)
{
    ptr = tail;
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->info);
        ptr = ptr->prev;
    }
}
void insertAfterSpecificElement(node *head, node **tail, int data)
{
    if (head == NULL)
    {
        printf("No data Found\n");
        return;
    }
    while (head != NULL)
    {
        if (head->info == data)
        {
           break;
        }
        head = head->next;
    }
    if (head == NULL)
    {
        printf("Element not found");
        return;
    }
    else
    {
        printf("Enter the data you want to insert\n");
        scanf("%d", &data);
        temp = (node *)(malloc(sizeof(node)));
        temp->info=data;
        if (head->next==NULL)
        {
            temp->next=NULL;
            head->next=ptr;
            ptr->prev=*tail;
            *tail=temp;
        }
        else
        {
            temp->prev=head;
            temp->next=head->next;
            (head->next)->prev=temp;
            head->next=temp;
        }
        
        // temp->info = data;
        // temp->prev = head;
        // temp->next = head->next;
        // // if (head->next == NULL)
        // // {
        // //     head->next = temp;
        // //     (*tail) = temp;
        // //     printf("Node Insert Successfully\n");
        // //     return;
        // // }
        // head->next = temp;
        // // (temp->next)->prev = temp;
        // // printf("Node Insert Successfully\n");
    }
}
void deleteAtFirst(node **head, node **tail)
{
    if (*head == NULL)
    {
        printf("no element\n");
        return;
    }

    // temp=*head;
    if ((*head)->next == NULL)
    {
        *head = NULL;
        *tail = NULL;
        free(*head);
        printf("delete node successfully\n");
        return;
    }
    else
    {
        temp = (*head);
        (*head) = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
        printf("delete node successfully\n");
        return;
    }
}