#define N 5
int queue[N];
int front == -1;
int rear == -1;

void enqueue(int x)
{

    if (rear = N - 1)
    {
        printf("overflow\n");
    }
    else if
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
    if (front==-1 && rear==-1)
    {
        printf("underflow");
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("element delete : %d",queue[front]);
        front++;
    }
    
    
}

void display(){
    int i;
    if (front==-1 && rear==-1)
    {
        printf("underflow");
    }
    for ( i = front; i < rear+1; i++)
    {
        printf("element : %d",queue[i]);
    }
    
}
void peek()
{
    if (front==-1 && rear==-1)
    {
        printf("underflow");
    }
    else{
        printf("front element is : %d",queue[front]);
    }
}