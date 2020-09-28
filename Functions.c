#include<stdio.h>

float divide(float num1, float num2)		//A function float
{
	float result=num1/num2;
	return (result);
}

int factorial(int num)
{
	int i, fact=1;
	for(i=2; i<=num; i++)
		fact*=i;
		
	return (fact);
}

void print_recursive(int num)		//Printing using recursive function
{
	printf("%d\n",num);
	if(num>1)
		print_recursive(num-1);
	
}

int factorial_recursive(int num)	//Factorial using recursive function
{
	return (num == 1) ? 1 : num*factorial_recursive(num-1);
}

int reverse(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	return(num1, num2);
}

void main()
{
	/*
	float num1, num2, result;
	printf("Enter two number (for dividing): \n"); scanf("%f %f", &num1, &num2);
	result=divide(num1,num2);		//Invokes function divide and assign the value to result
	printf("Result is: %f\n\n", result);
	
	int num, fact;
	printf("Enter the number (for factorial): "); scanf("%d", &num);
	fact=factorial(num);
	printf("Result is: %d\n\n", fact);
	*/
	
	//24-09-2018 (MONDAY)
	/*
		Two types of functions:
		1.User-Defined Functions	It is the main function
		2.Library Defined Functions
	*/
	
	/*
		Function Prototype or Function Signature
		1.We can define the function after and before main, but we have to declare the function before main.
	*/
	
	//	Recursive Function: When one function calls itself, it is called recursive function.
	
	
	int num1, num2, num3;
	printf("Enter the number (for printing):"); scanf("%d",&num3);
	print_recursive(num3);
	
	
	int result;
	printf("Enter the number (for factorial):"); scanf("%d", &num3);
	result = factorial_recursive(num3);
	printf("Factorial is: %d\n", result);
	
	
	printf("Enter two numbers (for changing the numbers):\n");
	scanf("%d %d", &num1, &num2);
	printf("Number 1: %d\nNumber 2: %d\n", num1, num2);
	reverse(num1, num2);
	printf("Number 1: %d\nNumber 2: %d\n", num1, num2);
}
