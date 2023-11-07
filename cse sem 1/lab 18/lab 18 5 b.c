#include<stdio.h>
 
void swapbyrefrence(int *x,int *y)
{
	int tamp=*x;
	*x=*y;
	*y=tamp;
	printf("\nafter swap : num1=%d num2=%d",*x,*y);
}
void main()
{
	int num1=5,num2=10;
	
	printf("before swap: num1=%d, num2=%d",num1,num2);
	swapbyrefrence(&num1,&num2);
	
}
