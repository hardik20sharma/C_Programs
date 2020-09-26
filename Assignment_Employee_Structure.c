#include<stdio.h>
#include<string.h>

struct date
{
	int day, month, year;	
};

struct employee
{
	char name[30];
	int id, salary;
	struct date birthday;	
};

void main()
{
	int i, n;
	struct employee e[5];
	
	printf("Enter the number of employees: "); scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the employee name: "); fflush(stdin); gets(e[i].name);
		printf("Enter the employee id: "); scanf("%d", &e[i].id);
		printf("Enter the employee's salary: "); scanf("%d", &e[i].salary);
		printf("Enter the date of birthday (DD MM YYYY): "); scanf("%d %d %d", &e[i].birthday.day, &e[i].birthday.month, &e[i].birthday.year);
		printf("-------------\n");
	}
	
	printf("-------------\n-------------\n\n");
	
	for(i=0; i<n; i++)
	{
		printf("Employee %d -->\n", i+1);
		printf("Name: "); puts(e[i].name);
		printf("ID: %d\n", e[i].id);
		printf("Salary: %d\n", e[i].salary);
		printf("Birthday: %d-%d-%d\n", e[i].birthday.day, e[i].birthday.month, e[i].birthday.year);
		printf("-------------\n");	
	}
}
