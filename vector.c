#include<stdio.h>
void main(){

	int r,c,v,i,j,mat[10][10],vec[10][1], mul[10][1];
	
	printf("Enter the no of rows in matrix : ");
	scanf("%d",&r);
	printf("Enter the no of columns in matrix : ");
	scanf("%d",&c);
	
	for(i = 0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter the element : ");
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("Enter the no rows in vector : ");
	scanf("%d",&v);
	if(v!=c){
		printf("Multiplication not possible");
	}
	else{
		for(i=0; i<v; i++){
			printf("Enter the element : ");
			scanf("%d",&vec[i][0]);
			}
		int k =0;
		int sum = 0;
		for(i = 0; i<r; i++){
			for(j = 0; j<c ; j++){
				sum+= mat[i][j]*vec[j][0];
			}
			mul[k][0] = sum;
			k++;
			sum = 0;
		}
		
		printf("The resultant matrix is : ");
		for(i=0; i<r; i++){
			printf("%d\n",mul[i][0]); 
		}
		
	}
}
