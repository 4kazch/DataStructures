#include<stdio.h>
void main()
{	
	int i,m,n,arr[100],temp,j;
	
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter an element : ");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter a no : ");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
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
	printf("%d",arr[m-1]);
}
