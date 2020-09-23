//Ascending Order Array
#include<stdio.h>

void main()
{
	int i, j, n=5, a[5], temp=0;
	
	printf("Enter the numbers: \n");		//Inputing 5 numbers in an array
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	for(j=0; j<n-1; j++)					//Ordering the numbers
	{
		for(i=0; i<n-i-1; i++)		
			if(a[i]>=a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
	}
	
	printf("Numbers in ascending order are: \n");		//Printing the numbers	
	for(i=0; i<5; i++)
		printf("%d ",a[i]);		
	
}
