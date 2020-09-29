#include<stdio.h>

void main()
{
	int num1, num2, num3;
	printf("Enter the first number: "); scanf("%d", &num1);
	printf("Enter the second number: "); scanf("%d", &num2);
	printf("Enter the third number: "); scanf("%d", &num3);
	
	printf("\nThe largest number is ");
	if(num1 > num2)
	{
		if(num1 > num3)
			printf("%d", num1);
		else
			printf("%d", num3);
	}
	else
	{
		if(num2 > num3)
			printf("%d", num2);
		else
			printf("%d", num3);
	}
}
