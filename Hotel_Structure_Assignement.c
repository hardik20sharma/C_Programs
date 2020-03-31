/*
	2.Define a structure that can describe a hotel. It should have members that include the name, address, grade, avg_room charge and number
		of rooms.
		a. Print hotels of a given grade in order of chrages.
		b. Print hotels with room charges less than a given value
*/
#include<stdio.h>
#include<string.h>

struct hotel
{
	char name[30];
	char address[50];
	int grade;
	int avg_room_charge;
	int no_rooms;	
} h[5];

void func1(struct hotel h[5], int grade)
{
	int i, j=0, n; struct hotel temp_h[5], temp;
	
	for(i=0; i<5; i++)
		if(h[i].grade==grade)
			temp_h[j++]=h[i];
	n=j;		
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
			if(temp_h[i].avg_room_charge > temp_h[j].avg_room_charge)
			{
				temp=temp_h[i];
				temp_h[i]=temp_h[j];
				temp_h[j]=temp_h[i];
			}					
	}
	
	for(i=0; i<n; i++)
	{
		printf("Name :"); puts(temp_h[i].name);
		printf("Address: "); puts(temp_h[i].address);
		printf("Grade: %d\n", temp_h[i].grade); 
		printf("Avg Room Charge: %d\n", temp_h[i].avg_room_charge);
		printf("Number of rooms: %d\n", temp_h[i].no_rooms);
		printf("---------------\n");
	}
}

void func2(struct hotel h[5], int price)
{
	int i ,cnd=0;
	for(i=0; i<5; i++)
		if(price > h[i].avg_room_charge)
		{
			cnd=1;
			printf("Name :"); puts(h[i].name);
			printf("Address: "); puts(h[i].address);
			printf("Grade: %d\n", h[i].grade); 
			printf("Avg Room Charge: %d\n", h[i].avg_room_charge);
			printf("Number of rooms: %d\n", h[i].no_rooms);
			printf("---------------\n");
		}
	if(cnd==0)
		printf("NONE !!");
}

void main()
{
	strcpy(h[0].name,"Hotel Noor"); strcpy(h[0].address,"Bhopal"); h[0].grade=5; h[0].avg_room_charge=3000; h[0].no_rooms=40;
	strcpy(h[1].name,"Hotel Awadh"); strcpy(h[1].address,"Kothri"); h[1].grade=2; h[1].avg_room_charge=780; h[1].no_rooms=25;
	strcpy(h[2].name,"Hotel Taj"); strcpy(h[2].address,"Delhi"); h[2].grade=5; h[2].avg_room_charge=1000; h[2].no_rooms=30;
	strcpy(h[3].name,"Hotel Kiratin"); strcpy(h[3].address,"Channai"); h[3].grade=3; h[3].avg_room_charge=800; h[3].no_rooms=350;
	strcpy(h[4].name,"Hotel RK"); strcpy(h[4].address,"Banglore"); h[4].grade=5; h[4].avg_room_charge=1200; h[4].no_rooms=400;
	
	int grade, price;
	printf("Enter the desired grade: "); scanf("%d", &grade);
	printf("---------------\n");
	func1(h, grade);
	
	printf("\n--------------------------\n");
	printf("Enter the price: "); scanf("%d", &price);
	printf("---------------\n");
	func2(h, price);	
}
