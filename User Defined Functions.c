#include<stdio.h>
#include<string.h>

/*
	28-09-2018
	1.Write a udf to find largest element in an array
	2.Find the middle element of a string using udf
*/

int largest_element(int arr[], int n)
{
	int i, max=0;
	for(i=0; i<n; i++)
		if( max < arr[i])
			max=arr[i];

	return(max);
}

int middle_element(char str[], int n)
{
	return(n/2);
}

void main()
{
	int a[10], n, i;
	printf("Enter the length of array: "); scanf("%d", &n);
	printf("Enter the string:\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	printf("The largest element is: %d\n", largest_element(a,n) );
	
	char str[10];
	printf("Enter the string: "); fflush(stdin); gets(str); 
	n = strlen(str);
	printf("The middle element is: %c\n", str [ middle_element(str,n) ] );		
}
