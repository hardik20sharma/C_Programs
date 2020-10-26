/*
	FUNCTION AND STRUCTURE
	We will consider four different cases-
	
	1. Passing the individual members to the function
		struct student { char name[20]; int roll; float marks; } s1;
		func(char name[20]; int roll; float marks); ------- Function declared
		func(s.name, s.roll, s.marks);	---------Function invoked
		
	2. Passing whole structure to the function
		
		
	3. Passing structure pointer to functions
	4. Passing array of structure to function
	
	UNION
	union student
	{
		char name[20];
		int roll;
		float marks;
	};
	
	UNION will take the highest memory and use it. For example in above case name has highest bit of 20 bits.
	This 20 bits will be used for roll and marks also. In case of STRUCUTRE it will take 26 bits (20 bits + 2 bits + 4 bits)
	
*/

#include<stdio.h>

struct student
{
	char name[20];
	int roll_no;
	float marks;	
} s1, s[2];

void display1(char name[20], int roll, float marks)		//TYPE 1
{
	printf("Name: %s\n", name);
	printf("Roll: %d\n", roll);
	printf("Marks: %f\n", marks);	
}

void display2(struct student s)		// TYPE 2
{
	printf("Name: "); puts(s.name);
	printf("Roll: %d\n", s1.roll_no);
	printf("Marks: %f\n", s1.marks);	
}

void display3(struct student s[2],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("The name is: "); puts(s[i].name);
		printf("The roll number is: %d\n", s[i].roll_no);
		printf("The marks is: %d\n", s[i].marks);
		printf("-------------\n");	
	}
}

void display4()	//PROGRAM 4
{
	
}

void main()
{
	printf("Program 1 !!\n"); //PROGRAM 1 
	
	printf("Enter the name of the sutdent: "); fflush(stdin); gets(s1.name);
	printf("Enter the roll number: "); scanf("%d", &s1.roll_no);
	printf("Enter the marks: "); scanf("%f", &s1.marks);
	printf("-------------\n");
	
	display1(s1.name, s1.roll_no, s1.marks);
	printf("-------------\n");
	
	printf("\nProgram 2 !!\n"); //PROGRAM 2
	printf("-------------\n");
	display2(s1);
	printf("-------------\n");
	
	printf("\nProgram 3 !!\n"); //PROGRAM 3
	printf("-------------\n");
	int i, n;
	
	printf("Enter the number of students: "); scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the name of the sutdent: "); fflush(stdin); gets(s[i].name);
		printf("Enter the roll number: "); scanf("%d", &s[i].roll_no);
		printf("Enter the marks: "); scanf("%d", &s[i].marks);
		printf("-------------\n");
	}
	display3(s,n);	
}
