//Leap Year
//Hardik Sharma - 18BCG10044
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year: "); scanf("%d", &year);
	
	if(year%4!=0)
		printf("No");
	else if(year%100!=0)
		printf("Yes");
	else if(year%400!=0)
		printf("No");
	else
		printf("Yes");	
}
