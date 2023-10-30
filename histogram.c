#include<stdio.h>
#include<string.h>
void main(){
	char arr[100], temp;
	int i, j, n, count;
	printf("what is the string : ");
	gets(arr);
	n = strlen(arr);
	
	for(i=0;i<n;i++){
		temp = arr[i];
		count = 0;
		for(j=i;j<n;j++){
			if(temp == arr[j]){
				count+=1;
			}
		}
		printf("%c - %d\t ,",arr[i],count);
		
	}
	
	printf("%s",arr);
}
