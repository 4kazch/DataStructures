#include<stdio.h>
void main(){
	int arr1[100], arr2[100], uni[100], m, n, i , j, k ,x ,l=0 ,y;
	
	printf("Enter the no of elements in set 1 : ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		printf("enter the element: ");
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the no of elements in set 2: ");
	scanf("%d",&m);

	for(i=0;i<m;i++){
		printf("enter the element: ");
		scanf("%d",&arr2[i]);
	}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr1[i] == arr2[j]){
				x = arr1[i];
				y= sizeof(uni);
				for(k=0;k<l;k++){
					if(x==uni[k]){
						break;
					}
					else{
						uni[l] = x;
						l+=1;
					}
				}
					}
		}
		
	}
	
	for(i=0;i<l;l++){
		printf("%d\t",uni[l]);
	}
	
/*
	for(i=0;i<n;i++){
		printf("%d",arr1[i]);
		printf("\n");
	}
	for(i=0;i<m;i++){
		printf("%d",arr2[i]);
	}
*/
}

