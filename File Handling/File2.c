#include<stdio.h>
#include<string.h>
#include<process.h>

void main()
{
//WRITING TO FILE
	FILE *fp;
	fp=fopen("read_write_string_File2.txt", "w");
	if(fp==NULL)
	{
		printf("Error in opening file !!");
		exit(0);
	}
	
	char name[15], ch;
	int sno=1, roll, marks, n;
	printf("Enter ther number of students: "); scanf("%d", &n);
	printf("S No\tName\tRoll\tMarks\n"); 
	
	for(sno=1; sno<=n; sno++)
	{
		printf("%d\t", sno);
		scanf("%s\t%d\t%d", name, &roll, &marks);
		fprintf(fp, "%d %s %d %d", sno, name, roll, marks);
		fprintf(fp, "\n--------------------\n");
	}
	fclose(fp);

//READING FROM FILE
	fp=fopen("read_write_string_File2.txt", "r");
	if(fp==NULL)
	{
		printf("Error in opening file !!");
		exit(0);
	}
	printf("\n\nReading from file now:\n");
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);
	
//APPENDING IN FILE
	
	fp=fopen("read_write_string_File2.txt", "a");
	if(fp==NULL)
	{	
		printf("Error in opening file !!");
		exit(0);
	}
	printf("Enter ther number of students: "); scanf("%d", &n);
	printf("S No\tName\tRoll\tMarks\n"); 
	
	for(sno=1; sno<=n; sno++)
	{
		printf("%d\t", sno);
		scanf("%s\t%d\t%d", name, &roll, &marks);
		fprintf(fp, "%d %s %d %d", sno, name, roll, marks);
		fprintf(fp, "\n--------------------\n");
	}
	fclose(fp);
	
//READING THE FILE AGAIN
	FILE *fp1;
	fp1=fopen("read_write_string_File2.txt", "r");
	if(fp1==NULL)
	{
		printf("Error in opening file !!");
		exit(0);
	}
	printf("\n\nReading from file now:\n");
	while(ch!=EOF)
	{
		ch=fgetc(fp1);
		printf("%c", ch);
	}
	fclose(fp1);
}
