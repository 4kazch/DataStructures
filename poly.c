#include<stdio.h>
void main(){
	int poly1[10],poly2[10],sum[10],n;
	printf("Enter the order of the polynomial : ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
			printf("Enter the coefficient of x^%d : ",i);
			scanf("%d",&poly1[i]);
		}
	for(int i=0;i<=n;i++){
			printf("Enter the coefficient of x^%d : ",i);
			scanf("%d",&poly2[i]);
		}

	
	for(int i=0; i<=n; i++){
		sum[i] = poly1[i] + poly2[i];
	}
	
	
	for(int i = n; i>0; i--){
		printf("%dx^%d + ",poly1[i],i);
	}
	printf("%d\n",poly1[0]);
	
	for(int i = n; i>0; i--){
		printf("%dx^%d + ",poly2[i],i);
	}
	printf("%d\n",poly2[0]);

	for(int i = n; i>0; i--){
		printf("%dx^%d + ",sum[i],i);
	}
	printf("%d\n",sum[0]);
}
