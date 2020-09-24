//Perfect Number
#include<stdio.h>
int main()
{
	int number, i, sum=0;
	printf("Enter the number: "); scanf("%d", &number);
	
	for(i=1; i<number; i++)
		if(number % i==0)
			sum+=i;
	
	if(number==sum)
		printf("Perfect Number");
	else
		printf("Not a Perfect Number");
}
