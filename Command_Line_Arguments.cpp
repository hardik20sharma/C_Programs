/*
	Common Line Arguments		enum
		Arguments (also called parameters) are widely used in functions.
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

main( int argc, char* argv[] )		//argc is a condition
{									//argc==1 -- argv is 0
	int i,sum=0;					//argv
	if(argc == 1)
	{
		printf("%d   Exiting File", argc);
		exit(0);	
	}
	
	if(argc>1)
	{
		printf("%d   %s\n", argc, argv[0]);
		for(i=1; i<argc; i++)
		{
			printf("\n%s", argv[i]);
			sum += atoi(argv[i]);
		}
	}
	
	printf("\nSum:%d\n", sum);
}
