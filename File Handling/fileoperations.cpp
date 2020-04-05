#include<stdio.h>
#include<string.h>
#include<process.h>

main()
{
	FILE *fp;
	fp=fopen("student.txt", "w");
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
	
	fp=fopen("student.txt", "r");
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
}
