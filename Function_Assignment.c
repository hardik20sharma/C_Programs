/*
	Write a C program that uses functions:
	1.To insert a substring in a string given in a paricular position.
	2.To delete n characters from a given position in a given string.
	
	WAP to determine if the given string is a palindrome or not
*/

#include<stdio.h>
#include<string.h>

void func1(char str[30], char s[10], int n)
{
	int i=0, j=0, k=0; 
	char temp[30];

	while(temp[i]!='\0')
	{
		if(i==n)
			while(s[k]!='\0')
				temp[i++]=s[k++];
		else
			temp[i++]=str[j++];
	}

	printf("The new string: " ); puts(temp);
}

void main()
{
	char str[30], s[10];
	int n;
	printf("Enter the string: "); gets(str);
	printf("Enter the substring you want to enter: "); gets(s);
	printf("Enter the position at which you want the substring: "); scanf("%d", &n);

}

