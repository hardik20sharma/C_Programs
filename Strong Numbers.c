//Strong Numbers
#include<stdio.h>
void main()
{
	int number, d, i, sum = 0, fact;
	printf("Enter the number: "); scanf("%d", &number);

	int number_copy = number;
	while(number_copy)
	{
		d = number_copy % 10;
		fact = 1;
		for(i=1; i<=d; i++)
			fact *= i;
		sum += fact;
		number_copy /= 10;
	}

	if(number == sum)
		printf("Strong Number");
	else
		printf("Not a Strong Number");
}
