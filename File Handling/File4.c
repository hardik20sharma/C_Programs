#include<stdio.h>
#include<string.h>

void main()
{
	int a; 
	char c;
	FILE *p;
	p = fopen("input.txt", "r");
	
	fseek(p, 0,SEEK_END);
	printf("size of file:- %d\n", ftell(p));
	
	a=ftell(p); 
	fseek(p, a/2, SEEK_SET);
	
	c=fgetc(p);
	printf("middle char is %c", c);	
	
	fclose(p);
}
