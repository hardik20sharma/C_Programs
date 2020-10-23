// Strings
#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	
	char name[] = {'S','a','n','d','i','p'};
	char name1[] = "VIT";
	char name2[15];
	char name3[10];
	
	printf("Enter string:"); fgets(name2, 15, stdin); //Use fgets to take space in string
	
	//Printing name[]
	printf("%s\n", name);
	
	//Printing name2[]
	printf("\n%s\n", name2);
	
	//Copying string
	strcpy(name3, name1);
	printf("%s\n", name3);
	
	//String length
	i = strlen(name3);
	printf("%d\n", i);
}
