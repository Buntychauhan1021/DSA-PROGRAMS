#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int data);
void dequeue();
void display();
void peek();
int main()
{
    int data, ch;
    while (1)
    {
        printf("1.enqueue\n2.dequeue\n3.display\n4.peek\n");
        printf("enter the choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the data\n");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(1);
            break;

        default:
            printf("enter valid choice\n");
            break;
        }
    }
}
void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("under flow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("element delete : %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (i = front; i < rear + 1; i++)
        {
            printf("queue is :%d\n", queue[i]);
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow\n");
    }

    else
    {
        printf(" front is  %d", queue[front]);
    }
}