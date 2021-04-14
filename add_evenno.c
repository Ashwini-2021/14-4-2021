//write the addition of the even numbers upto n
#include<stdio.h>
int main()
{
    int i,n,k;
    printf("Input a number for which you want add the even numbers from 1 to::");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(i%2==0)
         {
           // k=(i*(i-1))/2;
           printf("\t %d",i);
         }
    }
    return 0;
}