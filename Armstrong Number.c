//Program to find if a number is Armstrong or not

#include<stdio.h>
#include<math.h>

void main()
{
	int num1, num1_store, digits=0, d, num2=0;
	printf("Enter the number: "); scanf("%d",&num1);
	num1_store=num1;
	
	//To know the number of digits
	while(num1>0)
	{
		digits++;
		num1/=10;
	}
	
	num1 = num1_store;
	
	while(num1>0)
	{
		d = num1 % 10;
		num2 = num2 + pow(d, digits);
		num1 /= 10;
	}
	
	if(num1_store==num2)
		printf("Armstrong Number");
	else
		printf("Not an Armstrong Number");
}
