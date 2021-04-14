/*c programe to take and display elements in 1D array*/
#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("how many elements you want in your array::");
	scanf("%d",&n);

	printf("enter elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d",i,a[i]);
		printf("\n");
	}
  return 0;
}
	