#include<stdio.h>
int input(int spr[][10], int sum[][10]){
	int r,c,i,j,arr[10][10];
	printf("Enter the no of rows : ");
	scanf("%d",&r);
	printf("Enter the no of columns : ");
	scanf("%d",&c);
	
	for(i=0; i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the element : ");
			scanf("%d",&arr[i][j]);
			sum[i][j] += arr[i][j];
		}
	}
	
	int val=0,k=1;
	
	for(i=0; i<r;i++){
		for(j=0;j<c;j++){
			if(arr[i][j]!=0){
				val++;
				spr[k][0]=i;
				spr[k][1]=j;
				spr[k][2]=arr[i][j];
				k++;
			}
			
		}
	}
	
	spr[0][0] = r;
	spr[0][1] = c;
	spr[0][2] = val;
	
	return k;
}

void display(int spr[][10], int k){
	printf("Rows   Columns  Value\n");
	for(int i=0;i<k;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",spr[i][j]);
		}
		printf("\n");
	}
}

void main(){
	int spr1[10][10], spr2[10][10],sum[10][10];
	for(int i =0;i<10;i++){
		for(int j=0; j<10; j++){
			sum[i][j] = 0;
		}
	}
	int k1 = input(spr1,sum);
	int k2 = input(spr2,sum);
	display(spr1,k1);
	display(spr2,k2);
	int k3;
	if(k1>k2){
		k3 = k1;
	}
	else{
		k3 = k2;
	}
	display(sum,k3);
	
}

