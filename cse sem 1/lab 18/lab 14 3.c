#include<stdio.h>
float simpleint(float principal,float rate, float time){
	return (principal*rate*time)/100;
}
void main()
{
	float principal,rate,time,intrest;
	printf("enter pricipal amount:");
	scanf("%f",&principal);
    printf("enter rate of intrest:");
	scanf("%f",&rate);
	printf("enter time (in year):");
	scanf("%f",&time);
	intrest=simpleint(principal,rate,time);
	printf("simple intrest:%.2f\n",intrest);
}
