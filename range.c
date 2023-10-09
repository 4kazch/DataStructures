#include<stdio.h>
void main()
{	
	int i,n,arr[100],temp,j;
	
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
	
	printf("range : (%d , %d)", arr[0],arr[n-1]);
	
}
