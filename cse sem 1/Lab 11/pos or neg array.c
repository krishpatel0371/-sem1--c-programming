#include<stdio.h>
void main()
{
	int  n,i=0,poscount=0,negcount=0;
	printf("enter the number of element:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	 
	if(arr[i]>0)
	{
		poscount++;
	}
	else
	{
		negcount++;
	}
}
	printf("the positive number is %d",poscount);
    printf("the negative number is %d",negcount);

}
