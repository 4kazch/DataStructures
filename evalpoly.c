#include<stdio.h>
#include<math.h>
void main(){
	int poly1[10],n,x,i;
	printf("Enter the order of the polynomial : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
			printf("Enter the coefficient of x^%d : ",i);
			scanf("%d",&poly1[i]);
		}
	printf("Enter the value of x : ");
	scanf("%d",&x);	
	
	int sum=0; 
	
	for(i=0;i<=n;i++){
		int val = pow(x,i);
		sum+= poly1[i]*val;
	}
	printf("Sum = %d",sum);
}
