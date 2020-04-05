#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp;
	char str[10];
	int i=5;
	fp=fopen("abc,txt","w");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
		
	}
	
	fseek(fp,0,SEEK_END) 							//this will move the file pointer to somewhere in the file 
	printf("size of the file is %d", ftell(fp)); 	//tell you where the file pointer is located
}
