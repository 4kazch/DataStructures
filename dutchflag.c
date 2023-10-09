#include<stdio.h>
void main()
{	
	int i,n,arr[100],temp,j;
	
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter an element(only 0,1 and 2) : ");
		scanf("%d",&arr[i]);
	}
	
	int zero = 0;
	int one = 0;
	int two = 0;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			zero++;
		}
		else if(arr[i] == 1)
		{
			one++;
		}
		else if(arr[i] == 2)
		{
			two++;
		}
	}
	
	for(i=0;i<zero;i++)
	{
		arr[i] = 0;
	}
	
	for(i=zero;i<zero+one;i++)
	{
		arr[i] = 1;
	}
	
	for(i=zero+one ; i<n ; i++)
	{
		arr[i] = 2;
	}
	
	printf("Sorted array : ");
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",arr[i]);
	}
}
