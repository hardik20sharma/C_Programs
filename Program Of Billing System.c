/*
	3.WAP a program for restaurant billing system. Enter name of item, and quantity of item. It will display a detailed bill
		to the customer.
*/

#include<stdio.h>

void main()
{
	int i, pizza_qnt, coke_qnt, cake_qnt, burger_qnt, pizza_price, coke_price, cake_price, burger_price, total_price;
	
	printf("Enter the quantity for Pizza: "); scanf("%d",&pizza_qnt);
	printf("Enter the quantity for Coke: "); scanf("%d",&coke_qnt);
	printf("Enter the quantity for Cake: "); scanf("%d",&cake_qnt);
	printf("Enter the quantity for Burger: "); scanf("%d",&burger_qnt);
	
	for(i=0; i<25; i++)
		printf("-");
	
	printf("\n|\tPIZZA HUT\t|");
	printf("\n|\tBILL NO:121\t|\n");

	printf("|");
	for(i=0; i<23; i++)
		printf("-");
	printf("|");
	
	printf("\n| ITEM |QUANTITY |PRICE |");
	
	printf("\n|");
	for(i=0; i<23; i++)
		printf("-");
	printf("|");
	
	pizza_price=pizza_qnt*400;
	coke_price=coke_qnt*100;
	cake_price=cake_qnt*50;
	burger_price=burger_qnt*90;
	total_price=pizza_price+coke_price+cake_price+burger_price;
	
	printf("\n|Pizza |    "); printf("%d",pizza_qnt); printf("\t|Rs");   printf("%d",pizza_price); printf(" |");
	printf("\n|Coke  |    "); printf("%d",coke_qnt); printf("\t|Rs");   printf("%d",coke_price); printf("  |");
	printf("\n|Cake  |    "); printf("%d",cake_qnt); printf("\t|Rs");   printf("%d",cake_price); printf("  |");
	printf("\n|Burger|    "); printf("%d",burger_qnt); printf("\t|Rs");   printf("%d",burger_price); printf("  |");
	
	printf("\n|");
	for(i=0; i<23; i++)
		printf("-");
	printf("|");
	
	printf("\n|\tTOTAL:Rs "); printf("%d",total_price); printf("\t|\n");
	
	for(i=0; i<25; i++)
		printf("-");
	
	printf("\n\n");
}
