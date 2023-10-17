
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
    
   }
   int max=arr[0];
   int min=arr[0];
   int sum=arr[0];
   double avg;
   
   for (i=1;i<n;i++)
   {
   	if (arr[i]>max)
   	{
   		max=arr[i];
	   }
	   if(arr[i]<min)
	   {
	   	min=arr[i];
	   }
	   sum+=arr[i];
  }                
  avg=sum/n;
  printf("maximum:%d\n",max);
  printf("minimum:%d\n",min);
  printf("sum:%d\n",sum);
  printf("avrage:%d\n",avg);
          
}
