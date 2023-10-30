#include<stdio.h>

void insert(int m, int n, int arr[]){
	for(int i=0; i<n; i++){
		if( m < arr[i] ){
			int x = i;
			break;
		}
	}
	for(i=n-2;i>x;i--){
		arr[i+1] = arr[i];
	}
	arr[x] = m;
}

void main(){
	int n, m, i, j, arr[100], temp, x;
	
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		printf("enter the element: ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=0; j<n-i-1 ;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	
	printf("enter no to be inserted : ");
	scanf("%d",&m);
	
	insert(m,n,arr[n]);

	
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}

}	

	
