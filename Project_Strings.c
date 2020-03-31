#include<stdio.h>
#include<string.h>

char swapstr(char a1[], char a2[])
{
	char temp[15];
	int i=0;
	while(a1!='\0')
		temp[i]=a1[i++];
	i=0;
	while(a2!='\0')
		a1[i]=a2[i++];
	i=0;
	while(temp!='\0')
		a2[i]=temp[i++];
		
	return(a1, a2);
}

void main()
{
	int i=0, j=0;
	char str[6][15], str_temp[15];
	printf("Enter the string (lowercase only): \n");
	for(i=0; i<6; i++)
		gets(str[i]);
		
	printf("\nThe strings are: \n");
	for(i=0; i<6; i++)
		puts(str[i]);
	
	for(i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if( strcmp(str[i] , str[j]) )
				swapstr(str[i], str[j]);				
		}
	}
	
	printf("\nThe strings are: \n");
	for(i=0; i<6; i++)
		puts(str[i]);
}
