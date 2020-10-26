#include<stdio.h>

void main()
{
	int a, a1, b1, c1;
	float b;
	char c;
	a1 = sizeof(a);
	b1 = sizeof(b);
	c1 = sizeof(c);
	printf("\nSize of int: %d",a1);
	printf("\nSize of float: %d",b1);
	printf("\nSize of char: %d",c1);
}
