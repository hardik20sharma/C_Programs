#include<stdio.h>

void main()
{
	float ctemp, ftemp;
	printf("Enter the temperature in Celsius: "); scanf("%f", &ctemp);
	ftemp=(1.8*ctemp)+32;
	printf("The temperature in Fahrenheit is %f", ftemp);
}
