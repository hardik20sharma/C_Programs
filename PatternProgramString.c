// Pattern Program
#include<stdio.h>
void main()
{

	int j, i, k, n = 6;
	char arr[6] = "String";
	
	//r
	//tr
	//str	
	for(i=n-1; i>=0; i--)
	{
		for(j=i; j<n; j++)
			printf("%c", arr[j]);
		printf("\n");
	}
	printf("\n\n\n");
	
	//s
	//st
	//str
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
			printf("%c", arr[j]);
		printf("\n");
	}
	printf("\n\n\n");
	
	//	    u
	//	   un
	//	  uni
	for(i=0; i<n+1; i++)
	{
		for(k=n-i; k>0; k--)
			printf(" ");
		for(j=0; j<i; j++)
			printf("%c", arr[j]);
		printf("\n");
	}
}
