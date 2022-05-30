//selection sort
#include <stdio.h>
#include <conio.h>
void selection(int a[40], int n);
int max(int a[40],int n);
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
    selection(a, n);
    printf("\nelement after sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}

void selection(int a[40],int n)
{
    int i,loc=0,temp=0;
    for ( i = n-1; i >=1; i--)
    {
        
        
        loc=max(a,i);
        temp=a[loc];
        a[loc]=a[i];
        a[i]=temp;
     
    }
    
}

int max(int a[40],int n)
{
    int max=0; 
    int i;
    for ( i = 1; i <=n; i++)
    {
      if (a[i]>a[max])
      {
          max=i;
      } 
      
       
    }
    return max;
    
}


