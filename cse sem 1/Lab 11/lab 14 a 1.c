#include<stdio.h>
void main()
{
	int  n,i=0;
	printf("enter the number of element:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	 } 
	 printf("numbers in normal order:");
	 for(i=0;i<n;i++)
	 {
	 	printf("\n%d",arr[i]);
	 }
	 printf("\nnumbers in reverse order:");
	 for(i=n-1;i>=0;i--)
	 {
	 	printf("\n%d",arr[i]);
	 }
	 printf("\n");
}
