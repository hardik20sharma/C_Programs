#include<stdio.h>

void main()
{
	int num;
	printf("Enter the number: "); scanf("%d",& num);
	
	printf("\nThe numer is ");
	if(num % 2 == 0)
		printf("Even\n");
	else
		printf("Odd\n");
}
