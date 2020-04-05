/* 
"24 marks"

	1.A file is nothing but a collection of records and each line of the data is recorded in the file.
	2.The record is a group of related data items.
	3.The library functions to access the files are available in stdio.h
	4.Computers store files to secondary storage so that the contents of files remain intact when a computer shuts down.
	
	TYPES OF FILE-
		Many types of data files. Some are mp3, dat file, binary file, word file etc.
		In binary files data is stored in form of 0 and 1 only.
	
		1.Sequential Files: Here data are arranged sequentially. To read the last record of the file it is expected to read 
		all the records before it. It takes more time to access the records.
	
		2.Random Access Files: In this type, data can be read and modified randomly without reading the intermediate records	

	File Open mode
		Mode 							Meaning
		r				Open text file in read mode
						If file exists the marker is postioned in beginning
						If file doesn't exists, error returned
		
		w				Open text file in write mode
						If file exists, it is errased
						If file doesn't exists, it is created
		
		a				Open text file in append mode
						if file exists, the marker is positioned at end of the file
						if file doesn't exists it is createrd
	
	Steps in processing a file
		Create the stream via a pointer varaible usind the FILE structure: FILE *p;
		
	Opening a file
		
		FILE *fp;
		fp=fopen("data.txt","r");
		
		fopen() performs the following tasks
		1.Searches the disk for opening the file
		2.If file exists, loads the file from disk to memory
		3.Locates a character pointer pointing to first character of file
		
	FILE OPERATIONS
	fopen() - open a file, specify how its need to be opened and type too
	getc() - reads a character from file
	putc() - writes a character to a file
	fgetc() - reads a character from file
	fputc() - writes character to a file
	fclose() - close an opened file
	fscanf() - reads formatted data from file
	fprintf() - writes formatted data to a file
	fread() - read from a file
	fwrite() - write to a file
	fseek / fsetpos - move a file pointer to somewhere in a file
	ftell / fgetpoes - tell you where the file pointer is located
	putw() - writes an integer vaule to the file
	getw() - returns the integer value from a file
*/

/*
	PROGRAMS
	1.Number of alpha
	2.Number of vowels
*/
#include<stdio.h>
#include<process.h>
#include<ctype.h>
void main()
{
	FILE *fp;		//Program to read  characters from file
	fp=fopen("input_File1.txt","r");
	if(fp==NULL)	//checks if file exists or not
	{
		printf("File does not exists");
		exit(0);
	}
	char ch;
	int cnt1=0, cnt2=0;	//cnt1 for alphabets, cnt2 for vowels
	ch=fgetc(fp);	//takes one character from file
	while(ch!=EOF)
	{
		printf("%c", ch);
		if(isalpha(ch))
			cnt1++;
		if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'||ch=='O'|| ch=='U')
			cnt2++;
		ch=fgetc(fp);
	}
	printf("\nNumber of alphabets: %d", cnt1);
	printf("\nNumber of vowels: %d", cnt2);
	fclose(fp);
	
/*
	WRITING IN A FILE
	fprintf(fp, "%d %f", roll, marks);
	fscanf(fp, "%s %d", text, &age);
	fclose(fp);
*/	

	fp=fopen("output_File1.txt","w");
	if(fp==NULL)
	{
		printf("File does not exists");
		exit(0);	
	}

	printf("\n\nEnter the character: "); scanf("%c", &ch);	//Program to write a character in a file
	fputc(ch,fp);
	fclose(fp);
}

