#include<stdio.h>

float max(float num1, float num2, float num3){


if (num1>=num2 && num1>=num3)
{
	return num1;
	}	
	else if(num2>=num1 && num2>=num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}
void main()
{
	float num1,num2,num3,maximum;
	printf("enter your floating point number:");
	scanf("%f %f %f",&num1,&num2,&num3);
	
	maximum=max(num1,num2,num3);
	printf("maximum value is %f",maximum);
}
	

