#include<stdio.h>
void main(){
	int i, j, r, c, mat[100][100],spr[10][10];
	printf("Enter the no of rows : ");
	scanf("%d",&r);
	printf("Enter the no of columns : ");
	scanf("%d",&c);
	
	for(i=0 ; i<r; i++){
		for(j=0; j<c ; j++){
			printf("Enter the element : ");
			scanf("%d",&mat[i][j]);
		}
	}
	int k = 1;
	int count = 0;
	for(i=0 ; i<r; i++){
		for(j=0; j<c ; j++){
			if(mat[i][j] != 0){
				spr[k][0] =  mat[i][j];
				spr[k][1] =  i;
				spr[k][2] =  j;
				k++;
				count++;
			}
		}
	}
	spr[0][0] = count;
	spr[0][1] = r;
	spr[0][2] = c;
	
	printf("element:  row:   column:\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<k-1 ; j++){
			printf("%d\t",spr[i][j]);
		}
		printf("\n");
	}
}
