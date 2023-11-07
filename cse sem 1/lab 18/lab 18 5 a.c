#include<stdio.h>
 
void swapbyvalue(int x,int y)
{
	int tamp=x;
	x=y;
	y=tamp;
	printf("after swap : num1=%d num2=%d",x,y);
}
void main()
{
	int num1=5,num2=10;
	
	printf("before swap: num1=%d, num2=%d",num1,num2);
	swapbyvalue(num1,num2);
	
}
