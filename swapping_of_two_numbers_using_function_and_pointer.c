/*c programe for swapping of two numbers using function and pointer*/
#include<stdio.h>
void swap(int*,int*);
int main()
{
  int a=10,b=20,temp=0;
  printf("before swapping a=%d and b=%d",a,b);
  swap(&a,&b);
  printf("\nafter swapping a=%d and b=%d",a,b);
return 0; 
}
 void swap(int* x,int* y)
{
   int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
