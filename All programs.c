//All programs in one
//Hardik Sharma-18BCG10044

#include<stdio.h>
#include<math.h>

void main()
{
	int choice;
	printf("1. Find factorial of a number.\n");
	printf("2. Print reverse of a number.\n");
	printf("3. Find if a number is palindrome or not.\n");
	printf("4. Find if a number is armstrong or not.\n");
	printf("5. Find out all armstrong numbers between 1 and 1000.\n");
	printf("6. Find out if a number is prime or not.\n");
	printf("7. Choose this for pattern");
	printf("\nEnter your choice: "); scanf("%d", &choice);
	printf("\n\n");
	int num, fact=1, i, d, num1, num2=0, num1_store, digits=0, j, n, cnt=0;
	
	switch(choice)
	{
		case 1:
			printf("Enter the number: "); scanf("%d", &num);
			for(i=1; i<=num; i++)
				fact*=i;
			printf("The factorial is %d", fact);
			break;
			
		case 2:
			printf("Enter the number: "); scanf("%d", &num);
			printf("The number is ");
			while(num>0)
			{
				d=num%10;
				printf("%d",d);
				num/=10;	
			}
			break;
			
		case 3:
			printf("Enter the number: "); scanf("%d", &num1);
			
			num1_store=num1;
			
			while(num1>0)
			{
				d=num1%10;
				num2=(num2*10)+d;
				num1/=10;
			}
			
			if(num1_store==num2)
				printf("Palindrome");
			else
				printf("Not a Palindrome");
			break;
			
		case 4:
			printf("Enter the number: "); scanf("%d",&num1);
			num1_store=num1;
	
			//To know the number of digits
			while(num1>0)
			{
				digits++;
				num1/=10;
			}
			
			num1=num1_store;
	
			while(num1>0)
			{
				d=num1%10;
				num2=num2+pow(d,digits);
				num1/=10;		
			}
	
			if(num1_store==num2)
				printf("Armstrong Number");
			else
				printf("Not an Armstrong Number");
			break;
			
		case 5:
			for(num1=1; num1<1000; num1++)
			{
				digits=0;
				num1_store=num1;
				while(num1_store>0)
				{
					digits++;
					num1_store/=10;
				}
				num1_store=num1;
				while(num1_store>0)
				{
					d=num1_store%10;
					num2=num2+pow(d,digits);
					num1_store/=10;		
				}
				if(num1==num2)
					printf(" %d",num1); 
				num2=0;
			}
			break;
		
		case 6:
			printf("Enter the number: "); scanf("%d", &num);
			for(i=1; i<=num; i++)
				if(num%i==0)
					cnt++;
			if(cnt==2)
				printf("Prime Number");
			else
				printf("Not a Prime Number");
			break;
			
		case 7:
			printf("Enter the value of n: "); scanf("%d",&n);
			
			for(i=1; i<=n; i++)
			{
				for(j=0; j<i; j++)
					printf("*");
				printf("\n");
			}
	
			printf("\n");
	
			for(i=1; i<=n; i++)
			{
				for(j=1; j<=i; j++)
					printf("%d",j);
				printf("\n");
			}
			printf("\n");
			int cnt=1;
			for(i=1; i<=n; i++)
			{
				for(j=1; j<=i; j++)
					{
						printf(" %d", cnt);
						cnt++;
					}
				printf("\n");
			}
		
			printf("\n");
			
			for(i=1; i<=n; i++)
			{
				for(j=1; j<=i; j++)
					printf("%d",i);
				printf("\n");
			}
		break;
		default:
			printf("Out of bound !!\n");
			break;		
	}
}

