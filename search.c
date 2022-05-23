#include <stdio.h>
#include <conio.h>

int linearsearch(int arr[], int size, int element);
void binarysearch();

void main()
{
    int   arr[100], size, element, i;
   

    printf("size of array\n");
    scanf("%d", &size);
    printf("enter the numbere\n");
    for (i = 0; i <= size - 1; i++)
    {
        scanf("%d\n", &arr[i]);
    }
        printf("enter the element you wnat to search\n");
            scanf("%d\n", &element);
    // while (1)
    // {

    //     printf("1.binary search\n2.linear search\n3.exit\n");
    //     printf("enter the choice\n");
    //     scanf("%d\n", &ch);
    //     switch (ch)
    //     {
    //     case 1:
            
            linearsearch(arr, size, element);
    //         break;
    //     // case 2:
    //     //    exit();
    //     //    break;

    //     default:
    //         break;
    //     }
    // }
}
int linearsearch(int arr[], int size, int element)
{
    int found = 0, i;
    for (i = 0; i <= size-1; i++)
    {
        if (arr[i] == element)
        {
            printf("%d found at index number %d\n", element, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("data not found\n");
    }
   
}

