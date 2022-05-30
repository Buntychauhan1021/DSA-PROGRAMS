//bubble sort
#include <stdio.h>
#include <conio.h>
void bubble(int a[], int n);
void main()
{
    int i, n;
    int a[100];
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element before sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    bubble(a, n);
    printf("\nelement after sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void bubble(int a[], int n)
{
    int i,j,temp;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
      
        {
        if (a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
        }
        
    }
    
}