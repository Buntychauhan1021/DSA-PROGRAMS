//insertion sort
#include <stdio.h>
#include <conio.h>
void insertionsort(int a[], int n);
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
    insertionsort(a, n);
    printf("\nelement after sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void insertionsort(int a[40],int n)
{
    int i,j,temp;
    for ( i = 1; i < n; i++)
    {
        temp=a[i];
        j=i-1;
        while ((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
        }
        
    }
    
