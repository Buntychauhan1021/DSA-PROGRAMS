//linear search
# include<stdio.h>
# include<conio.h>
int main(){
    int arr[100],i,size,found=0,element;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the all element\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to search\n");
    scanf("%d",&element);

    for ( i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            printf(" %d found at index number %d ",element,i);
            found=1;
            break;
        }
        
    }
    if(found==0)
    {
        printf("data not found\n");
    }
    
    
}