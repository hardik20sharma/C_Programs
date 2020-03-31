#include<stdio.h>
#include<conio.h>

int main()
{
	int n,d,sum=0,temp,i;
	printf("Enter any number:"); scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		int fact=1;
		for(i=d;i>=1;i--)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
		printf("Number is strong");
	else
		printf("Number is not strong");
}
