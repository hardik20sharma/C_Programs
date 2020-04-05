#include<stdio.h>
#include<process.h>
#include<string.h>

struct customer
{
	char fname[20], lname[20];
	int acc_num;
	float acct_balance;	
};

void main()
{
	FILE *outfile, *infile;
	struct customer c;
	
	outfile=fopen("input_File3.txt", "w");
	if(outfile==NULL)
	{
		printf("Error opening the file");
		exit(1);
	}
	
	//instruction to user
	printf("Enter \"stop\" for Fist Name to end program.");
	
	while(1)
	{
		printf("\nFirst Name:"); scanf("%s", c.fname);
		
		if(strcmp(c.fname,"stop") == 0)
			break;
		
		printf("Last name: "); scanf("%s", c.lname);
		printf("Account Number: "); scanf("%d", &c.acc_num);
		printf("Balance: "); scanf("%d", &c.acct_balance);
		
		fwrite(&c, sizeof(struct customer), 1, outfile);
	}
	fclose(outfile);
}
