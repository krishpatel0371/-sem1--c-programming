#include<stdio.h>
void main()
{
	int evencount=0,oddcount=0,i,n;
	int arr[n];
	
	printf("enter the number of element:");
	scanf("%d",&n);
	
	printf("enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
	}
	printf("the even numbver is %d",evencount);
	printf("the odd numbver is %d",oddcount);

}
