//WAP to reverse one input string and write the original string & reverse string into a file
#include<stdio.h>
#include<process.h>
#include<string.h>

void main()
{
	FILE *fp;
	fp=fopen("File_5.txt","w");
	if(fp==NULL)	//checks if file exists or not
	{
		printf("File does not exists");
		exit(0);
	}
	char str1[10], str2[10], ch;
	printf("Enter the string: "); scanf("%s", &str1);
	
	int n=strlen(str1), i=0;
	while(n--)
		str2[i++]=str1[n];
	str2[i]='\0';
	
	fprintf(fp,"%s\n",str1);
	fprintf(fp,"%s\n",str2);
	
	fclose(fp);
}
