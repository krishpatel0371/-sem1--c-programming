#include<stdio.h>
 
int max(int num1, int num2)
{
	return(num1>num2)?num1:num2;
}
int min(int num1,int num2)
{
	return(num1<num2)?num1:num2;

}
void main()
{

      int num1,num2;
      printf("enter the first number:");
      scanf("%d",&num1);
    printf("enter the second number:");
	scanf("%d",&num2);
	
	//int maximum,minimum;
	int maximum=max(num1,num2);
	int minimum=min(num1,num2);
	printf("maximum value is %d",maximum);
    printf("minimum value is %d",minimum);

	
}
