#include<stdio.h>

void main()
{
	int marks1, marks2, marks3, marks4, marks5, sum; 
	float avg;
	
	printf("Enter the marks of first subject: "); 	scanf("%d", &marks1);
	printf("Enter the marks of second subject: "); 	scanf("%d", &marks2);
	printf("Enter the marks of third subject: "); 	scanf("%d", &marks3);
	printf("Enter the marks of fourth subject: "); 	scanf("%d", &marks4);
	printf("Enter the marks of fifth subject: "); 	scanf("%d", &marks5);

	sum = marks1 + marks2 + marks3 + marks4 + marks5;
	avg = sum/5;
	printf("The average is %f", avg);
	
	printf("\nResult :");
	
	if(avg > 90)		printf("A");
	else if(avg > 80)	printf("B");
	else if(avg > 70)	printf("C");
	else if(avg > 60)	printf("D");
	else if(avg > 50)	printf("E");
	else if(avg > 40)	printf("F");
	else			printf("Failed");
}
