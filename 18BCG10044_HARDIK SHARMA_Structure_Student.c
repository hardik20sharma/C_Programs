#include<stdio.h>
#include<string.h>

struct student
{
	char name[30];
	int roll_no;
	int marks;	
} s[5];

void main()
{
	int i, n;
	
	printf("Enter the number of studets: "); scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter the name of the sutdent: "); fflush(stdin); gets(s[i].name);
		printf("Enter the roll number: "); scanf("%d", &s[i].roll_no);
		printf("Enter the marks: "); scanf("%d", &s[i].marks);
		printf("-------------\n");
	}
	
	printf("\n-------------\n-------------\n\n");
	
	for(i=0; i<n; i++)
	{
		printf("The name is: "); puts(s[i].name);
		printf("The roll number is: %d\n", s[i].roll_no);
		printf("The marks is: %d\n", s[i].marks);
		printf("-------------\n");	
	}
}
