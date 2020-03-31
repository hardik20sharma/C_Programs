/*
	Common Line Arguments		enum
		Arguments (also called parameters) are widely used in functios.
			Example function (parameter_1, parameter_2);
		
		Commonand
			main()		()-means void parameter
			
			Now we will study return type main(int argc, char *argv[])
					argc is number of arguments
					*argv actual arguments in string
						argv[0] will give program name
						argv[1] to argv[n] are arguments
					For exampl: 1 sandip 93
						1 - argv[1]
						sandip - argv[2]
						93 - argv[3]
						1, sandip, 93 will be stored as strings.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

main( int argc, char* argv[] )
{
	int i, str[2], sum=0;
	if(argc == 1)
		printf("File Name: %s", argv[0]);
	
	if(argc > 1)
	{
		printf("%s\n", argv[0]);
		for(i=1; i<argc; i++)
		{
			printf("\n%s", argv[i]);
			sum += atoi(agrv[i]);
		}
	}
	
	printf("\nSum:%d", sum);
}
