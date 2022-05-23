# include<stdio.h>
# include<conio.h>
void towerofhanoi(char from,char to,char other,int n);
int main()
{
    int n=4;
    towerofhanoi('a','b','c',n);
}
void towerofhanoi(char from,char to,char other,int n)
{
//    if (n==1)
//    {
//        printf("move disk from %c to %c \n",from,to);
//    }
 //  else
  // {
      if(n>0)
      {
       towerofhanoi(from,other,to,n-1);
       printf("\n%c to %c \n",from,to);
       //towerofhanoi(from,other,to,n);
       towerofhanoi(other,to,from,n-1);
      }

  // }
   
}