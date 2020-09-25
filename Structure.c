#include<stdio.h>
#include<string.h>
/*
	STRUCTURE
	1)	It is also called derived data type. Can store multiple type of data types.
		Syntax:
			struct structure_name
			{
				data_type member_value1;
				data_type member_value2;			
			};
			
		Example:
			struct student
			{
				char name[30];
				int age;
				int roll_no;
			};
			
	2)	A strucute can be declared by
		Syntax:
			struct structure_name structure_variable;
		Example:
			struct student s1;
			
	3)	To access an information using structure
		Syntax:
			structure_variable.member_value1;
		Example:
			s1.name; (This is used to access the name of s1)
*/

struct student
{
	char name[15];
	int roll_no;
	int marks;
	char gender[1];
	long int phone_number;
} s1;

void main()
{
	printf("Enter the name: "); gets(s1.name);
	printf("Enter the roll number: "); scanf("%d", &s1.roll_no);
	printf("Enter the marks: "); scanf("%d", &s1.marks);
	printf("Enter the gender(M/F): "); gets(s1.gender);
	printf("Enter the phone number: "); scanf("%d ", &s1.phone_number);
	
	
}
