//quick sort
#include <stdio.h>
#include <conio.h>
int partition(int a[], int lb, int ub);
void quick(int a[], int lb, int ub);
void swap(int *m, int *n);
int main()
{
    int i, n;
    int a[100];
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("enter the array element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element before sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    quick(a, 0, n - 1);
    printf("\nelement after sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void quick(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc;
        loc = partition(a, lb, ub);
        quick(a, lb, loc - 1);
        quick(a, loc + 1, ub);
    }
}

int partition(int a[20], int lb, int ub)
{
    int pivot, start, end;
    pivot=a[lb];
    start = lb;
    end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }

        while (a[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            swap(&a[start], &a[end]);
        }
    }
    swap(&a[lb], &a[end]);
    return end;
}

void swap(int *m, int *n)
{
    int i;
    i = *m;
    *m = *n;
    *n = i;
}