/*
	1.WAP to find no of occurence of a given string in a paragraph. Input this paragragh and string. Output the no of occurence.
	2.Define a structure that can describe a hotel. It should have members that include the name, address, grade, avg_room 
	charge and number of rooms.
		a. Print hotels of a given grade in order of chrages.
		b. Print hotels with room charges less than a given value
	3.WAP a program for restaurant billing system. Enter name of item, and quantity of item. It will display a detailed bill
		to the customer.
*/
#include<stdio.h>
#include<string.h>
void main()
{
	char para[50], str[10], temp[20][10];
	int i, j, k, cnt;
	
	printf("Enter the paragraph: \n"); gets(para);
	printf("Enter the word: \n"); gets(str);
	
	j=0, k=0;
	for(i=0; i<strlen(para); i++)
	{
		if(para[i]==' ')
		{
			temp[j][k]='\0';
			j++;
			k=0;
		}
		else
			temp[j][k++]=para[i];
	}
	
	cnt=0;
	for(i=0; i<=j; i++)
	{
		if( strcmpi(temp[i], str)==0 )
			cnt++;
	}
	
	printf("\nNumber of occurence of word: %d", cnt);
}
