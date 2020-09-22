//Program to find Armstrong Numbers between 1 and 1000
//Hardik Sharma-18BCG10044
#include<stdio.h>
#include<math.h>
void main()
{
	int num1, num1_store, num2, d, digits;
	for(num1=1; num1<1000; num1++)
	{
		digits=0;
		num1_store=num1;
		while(num1_store>0)
		{
			digits++;
			num1_store/=10;
		}
		num1_store=num1;
		while(num1_store>0)
		{
			d=num1_store%10;
			num2=num2+pow(d,digits);
			num1_store/=10;		
		}
		if(num1==num2)
			printf(" %d",num1); 
		num2=0;
	}
}
