//Fibonacci Numbers
#include<stdio.h>

void main()
{
	int number, i, sum = 2, last_num = 1, second_last = 1;
	printf("Enter the number: "); scanf("%d", &number);

	if(number==1)
		printf("1");
	else if(number==2)
		printf("1 1 ");	
	else 
	{
		printf("1 1 ");
		for(i=2; i<number; i++)
		{
			printf("%d ", sum);
			second_last=last_num;
			last_num=sum;
			sum=last_num+second_last;
		}
	}
}
