#include<stdio.h>

void main()
{
	int x, y;

	printf("Enter the value of x: "); scanf("%d",&x);
	printf("Enter the value of y: "); scanf("%d",&y);

	printf("\nValue after ++x: %d",++x);
	printf("\nValue after --y: %d",--y);

	x++;
	y--;

	printf("\nValue after x++: %d",x);
	printf("\nValue after y--: %d",y);
}
