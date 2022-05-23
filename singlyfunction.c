#include <stdio.h>
#include <stdlib.h>

typedef struct iklist
{
    int info;
    struct iklist *next;
} node;
void insertAtBeg(node **head, int data);
void traverse(node *head);
void insertAtEnd(node **head, int data);
void insertAtIndex(node **head, int data, int index);
void insertAfterElement(node **head, int data);
void deleteAtFirst(node *head);
void deleteAtEnd(node *head);
void deleteAfterElement(node *head, int data);
void deleteAtIndex(node *head, int data);
void reverseTraverse(node *head);

node *ptr = NULL;
node *temp = NULL;

int main()
{

    node *head = NULL;
    int data;
    int ch;
    int index;
    while (1)
    {
        printf("1.insert at begning\n");
        printf("2.traverse\n");
        printf("3.insert at end\n");
        printf("4.insert at index\n");
        printf("5.insert element after data\n");
        printf("6.delete at first\n");
        printf("7.delete at end\n");
        printf("8.delete after element\n");
        printf("9.delete at index\n");
        printf("10.reverse travese\n");

        printf("enter the choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter the data\n");
            scanf("%d", &data);
            insertAtBeg(&head, data);
            break;
        case 2:
            traverse(head);

        case 3:
            printf("enter the data\n");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;

        case 4:
            printf("enter tha data\n");
            scanf("%d", &data);
            printf("enter the index\n");
            scanf("%d", &index);
            insertAtIndex(&head, data, index);
            break;

        case 5:

            printf("enter the data\n");
            scanf("%d", &data);
            insertAfterElement(&head, data);
            break;

        case 6:
            deleteAtFirst(head);
            break;

        case 7:
            deleteAtEnd(head);
            break;

        case 8:
            printf("enter data which after want to delete\n");
            scanf("%d", &data);
            deleteAfterElement(head, data);

        case 9:
            printf("enter the index number where you want delete element\n");
            scanf("%d", &data);
            deleteAtIndex(head, data);
            break;

        case 10:
            reverseTraverse(head);
            break;

        default:
            exit(1);
            break;
        }
    }
}
void reverseTraverse(node *head)
{
    ptr = head;
    printf("element : %d", ptr->info);
    reverseTraverse(head);
    ptr = ptr->next;
}

void deleteAtIndex(node *head, int data)
{
    ptr = head;
    temp = head->next;

    for (int i = 0; i < data - 1; i++)
    {
        ptr = ptr->next;
        temp = temp->next;
    }

    ptr->next = temp->next;
    free(temp);
}
void deleteAfterElement(node *head, int data)

{
    if (head == NULL)
    {
        printf("empty list\n");
    }
    ptr = head;
    while (ptr != NULL)
    {
        if (data == ptr->info)
            break;
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        printf("element not found");
    }
    else
    {
    }
}

void deleteAtEnd(node *head)
{
    node *p;
    if (head == NULL)
    {

        printf("list is empty");
        return;
    }
    if (head->next = NULL)
    {
        head = NULL;
        free(head);
        printf("node delete\n");
    }

    ptr = head;
    p = head->next;
    while (p->next != NULL)
    {
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = p->next;
    free(p);
}

void deleteAtFirst(node *head)
{
    // if (head==NULL)
    // {
    //     head=temp;
    //     head->next=NULL;
    //     free(temp);
    //     printf("delete node successfully\n");
    //     return;
    // }
    // else
    // {

    temp = head;
    head = head->next;
    free(temp);
    printf("delete node successfully\n");

    //  }
}
void insertAtBeg(node **head, int data)
{
    temp = (node *)malloc(sizeof(node));
    temp->info = data;
    if (temp != NULL)
    {
        temp->next = *head;
    }
    else
    {
        temp->next = NULL;
    }
    *head = temp;
    printf("node insert successfully\n");
}

void traverse(node *head)
{
    temp = head;
    while (temp != NULL)
    {
        printf("element : %d\n", temp->info);
        temp = temp->next;
    }
}
void insertAtEnd(node **head, int data)
{

    temp = (node *)malloc(sizeof(node));
    temp->info = data;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
        printf("insert node successfully\n");
        return;
    }
    ptr = *head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    printf("node insert successfully\n");
}
void insertAtIndex(node **head, int data, int index)
{
    temp = (node *)malloc(sizeof(node));
    temp->info = data;

    if (*head == NULL)
    {
        return;
    }
    ptr = *head;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    ptr->next = temp;
    temp->next = ptr->next;
    printf("node insert successfully");
}

void insertAfterElement(node **head, int data)
{

    temp = (node *)malloc(sizeof(node));

    if (*head == NULL)
    {
        printf("no element\n");
    }
    ptr = *head;
    while (ptr != NULL)
    {
        if (ptr->info == data)

            break;
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {

        printf("no data found\n");
    }

    else
    {
        printf("enter the element you want insert after data \n");
        scanf("%d", &data);

        temp->info = data;

        temp->next = ptr->next;
        ptr->next = temp;
    }
}
 