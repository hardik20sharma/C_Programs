//Pattern Programs

#include<stdio.h>

void main()
{
	int i, j, n;
	printf("Enter the value of n: "); scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=0; j<i; j++)
			printf("*");
		printf("\n");
	}
	
	printf("\n");
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			printf("%d",j);
		printf("\n");
	}
	
	printf("\n");
	
	int cnt=1;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			{
				printf(" %d", cnt);
				cnt++;
			}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			printf("%d",i);
		printf("\n");
	}	
}

