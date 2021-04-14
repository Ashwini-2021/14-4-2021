//c-programe to find the power of the number
#include<stdio.h>
int main()
{
    int number,power,i;
    long int N=1;

    printf("Enter the number::");
    scanf("%d",&number);

    printf("Enter the power:");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        N=N*number;
    }

    printf("%d power of %d is %ld",power,number,number);
    return 0;
}