#include<stdio.h>
#include<ctype.h>

void main()
{
	char c;
	printf("Enter the character: "); scanf("%c", &c);
	
	if(islower(c))
		printf("\nThe character is in lowercase");
	else
	{
		printf("The character is in uppercase");
		c = tolower(c);
	}
	
	printf("\nThe character is ");
	if(c == 'a' || c == 'e'|| c == 'i' || c == 'o' || c == 'u')
		printf("a vowel");
	else
		printf("a consonant");
}
