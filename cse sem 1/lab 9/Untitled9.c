#include<stdio.h>
void main(){
	int x,y,i=1,result=1;
	printf("Enter the two numbers x & y =");
	scanf("%d %d",&x,&y);
	while(i<=y){
		result=result*x;
		i++;
	}
	printf("%d" ,result);
}
