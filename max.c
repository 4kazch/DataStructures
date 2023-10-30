#include<stdio.h>
void main(){
	int n, i, arr[10], max[5];
	
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		printf("enter the element: ");
		scanf("%d",&arr[i]);
	}
	printf("the max is : ");
	for(i=1;i<n-1;i++){
		if( (arr[i] > arr[i+1]) && (arr[i] > arr[i-1])){
			printf("%d\t",arr[i]);
		}
	}
}
