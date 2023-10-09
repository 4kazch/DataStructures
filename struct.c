#include<stdio.h>
#include<string.h>

struct Student
{
	char name[50];
	int rollNo;
	int marks;
};

void main()
{	
	
	int i,n,m,index;
	printf("Enter the no of students : ");
	scanf("%d",&n);
	
	struct Student s[n];
	
	for(i =0; i<n; i++)
	{
		printf("Enter the roll no : ");
		scanf("%d", &s[i].rollNo);
		printf("Enter the name : ");
		scanf("%s", &s[i].name);
		printf("Enter the marks : ");
		scanf("%d", &s[i].marks);
	}
	
	printf("Enter roll no to search : ");
	scanf("%d",&m);
	
	for(i=0;i<n;i++)
	{
		if(s[i].rollNo == m)
		{
			 index = i;
			 break;
		}
	}
	
	//question a 
	printf("Name : ");
	puts(s[index].name);
	
	printf("Marks : %d", s[index].marks);
	
	//question c
	int arr[n];
	int small = s[0].marks;
	for
		for(i=1;i<n;i++)
		{
			if(small> s[i].marks)
			{
				small = s[i].marks;
			}
		}
	
	
}
