#include<stdio.h>

void main()
{
	int x, y, temp;
	printf("Enter the value of x: "); scanf("%d",&x);
	printf("Enter the value of y: "); scanf("%d",&y);
	temp = x;
	x = y;
	y = temp;
	printf("Value of x now is %d", x);
	printf("\nValue of y now is %d", y);
}
