//selection sort
#include <stdio.h>
#include <conio.h>
void insertion(int a[40], int n);
int max1(int a[40],int n);
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
        printf("%d\t",a[i]);
    }
    insertion(a, n);
    printf("\nelement after sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}

void insertion(int a[70],int n)
{
       int temp;
       int i,j;
       for ( i = 1; i < n; i++)
       {
       temp=a[i];
       j=i-1;
       while (a[j]>temp && j>=0)
       {
           a[j+1]=a[j];
           j--;

       }
       a[j+1]=temp;
           
       }
       
}