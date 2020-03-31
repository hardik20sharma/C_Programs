#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20], str2[10];
	printf("Enter a string:"); gets(str1);
	int n=strlen(str1), i, j;
	
	printf("\nReverse String:");		//without strrev() function
	for(i=n-1; i>=0; i--)
		printf("%c", str1[i]);
		
	
	printf("\nReverse String:%s", strrev(str1));	//with strrev() function
		
	printf("\n\nEnter string 2:"); gets(str2);	
	i=j=0;								//Copying string 2 to string 1 without strcpy() function
	while(str1[i]!='\0')
		i++;
	
	while(str2[j]!='\0')
		str1[i++]=str2[j++];
	str1[i]='\0';
	
	printf("%s", str1);
}


/*
	double atof(Const char *s);						Convert the string to double
	int atoi(const char *s);						Convert the string to integer
	long atoi(const char *s);						Convert the string to long
	double strtod(char *s, char **endptr);			Separates char and float data from the given string
	long strtol(char *s, char **endptr, int radix); Separates char and long int data from the given string
*/
