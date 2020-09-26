#include<stdio.h>

void main()
{
	int a;
	float b, c;
	printf("Enter number 1: "); scanf("%d",&a);
	printf("Enter number 2: "); scanf("%f",&b);
	c=a+b; printf("The sum is %f",c);
	c=a-b; printf("\nThe difference is %f",c);
	c=a*b; printf("\nThe product is %f",c);
	c=a/b; printf("\nThe answer on division is %f",c);
}
