#include<stdio.h>
void main()
{	
	int i,m,n,arr[100],temp,j,count;
	
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter an element : ");
		scanf("%d",&arr[i]);
	}
	

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("The sorted array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t", arr[i]);
	}
	
	printf("\n");
	
	int fr[100];
	
	for(i=0;i<n;i++)
	{	
		count = 1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				fr[j] = -1;
			}	
		}
		if(fr[i]!= -1)
		{
			fr[i] = count;
		}
		
	}
	
	printf("Frequency : ");
	for(i=0;i<n;i++)
	{
		if(fr[i]!=-1)
		{
			printf("%d : %d\t",arr[i],fr[i]);
		}
	}
	
	printf("\n");
}
