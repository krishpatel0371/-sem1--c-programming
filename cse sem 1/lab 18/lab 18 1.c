#include<stdio.h>
int add(int num1,int num2)
{
	return num1+num2;
}


void main()
{
    int num1, num2,result;
	
	printf("enter the first number:");
 	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);	 	
	
	result=add(num1,num2);
	printf("sum of %d and %d is : %d\n",num1,num2,result);



}
