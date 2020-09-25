/*

QUESTION:
	WAP that promts the user for two files. One containing line of text knows as source file. And another one is target 
	file which is empty. Take one location from the user delete the character from that location and insert the line from 
	source to target.
*/

#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
	FILE *ptr;
	char str[20], ch;
	int i=0, n;
	ptr=fopen("source_assignment.txt", "r");	//Opening source file in read mode
	
	if(ptr == NULL)
	{
		printf("Error Opening the File");
		exit(0);
	}
	
	//PRINTING CONTENT OF FIRST FILE AND SAVING THE CONTENT IN A STRING
	printf("Content of Source File: ");
	ch=fgetc(ptr);
	while(ch!=EOF)
	{
		str[i++]=ch;
		printf("%c", ch);
		ch=fgetc(ptr);
	}
	str[i]='\0';
	printf("\n\nEnter the position you want to delete: "); scanf("%d", &n);		//Taking position from user
	
	fclose(ptr);	//Closing source file
		
	ptr=fopen("target_assignment.txt", "w");	//Opening target file in append mode
	if(ptr == NULL)
	{
		printf("Error Opening the File");
		exit(0);
	}
	
	//WRITING IN TARGET FILE
	i=0;
	while( i < strlen(str) )
	{
		ch=str[i];
		if(i != (n-1) )
			fputc(ch, ptr);
		i++;
	}
	fclose(ptr);
	
	//READING FROM TARGET FILE
	ptr=fopen("target_assignment.txt", "r");
	printf("\nContent of Target File: ");
	ch=fgetc(ptr);
	while(ch!=EOF)
	{
		printf("%c", ch);
		ch=fgetc(ptr);	
	}
	fclose(ptr);	//Closing target file.
}
