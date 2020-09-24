//Pointers
#include<stdio.h>
void main()
{
	/*
		COUNTING THE LENGTH OF STRING USING POINTERS
	*/
	int i=0;
	char str1[15]="university", *p;
	
	p=str1;
	
	while(*p!='\0')
	{
		i++;
		p++;
	}
	
	printf("%d\n", i);	//Printing the length of string
	
	/*
		STRING CONCATENTAION USING POINTERS 
	*/
	
	char str2[30]="vit", *q;
	p=str2;
	q=str1;
	
	while(*p!='\0')
		p++;			//Used this to know the length of str2
	
	while(*q!='\0')
		*p++ = *q++;	//Copying the character from str1 to str2 and also incrementing the pointers p and q by one char valu
	*p='\0';		//Adding this to put the last character as NULL CHARACTER
	printf("%s", str2);

}
