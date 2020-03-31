//POINTERS (17-09-2018) MONDAY
//Hardik Sharma - 18BCG10044
#include<stdio.h>
void main()
{
	/*
	POINTERS
	*/
	int b=10;
	int *p;		//Pointer is used for holding the address of a variable, declared by using '*'
	printf("Printing address of b directly:%d\n",&b);		//Printing address of b directly
	
	p=&b;
	
	printf("Address of b in decimal:%d\n",p);		//Address of b in decimal
	printf("Address of b in hexa-decimal:%x\n",p);		//Address of b in hexa-decimal
	
	printf("Printing value of b:%d\n",b);			//Printing value of b
	printf("Printing value at the position pointed by pointer:%d\n",*p);		//Printing value at the position pointed by pointer
	
	
	/*
	POINTER TO POINTER
	The pointer variable containging the address of another pointer variable is called the pointer to pointer.
	It is a pointer that stores an address of another pointer variable.
	*/
	printf("\n\n");
	
	int **q;	//A pointer used to store address of another pointer
	q=&p;
	printf("Value at address stored in p:%d\n", *p);		//Value at address stored in p which is actually b
	printf("Address of p:%d\n", &p);	//Address of p
	printf("Value of q:%d\n", q);		//Value of q which is address of p
	printf("Value at address stored in p:%d\n", *q);		//Value at address stored in q which is actually p(address of b)
	printf("Value of b:%d\n", **q);		//Value at address stored in p which is further stored in pointer q
	
	/*
		INCREMENT AND DECREMENT IN POINTER
	*/
	printf("\n\n");
	
	printf("Value stored in p:%d\n", p);		//Value stored in p		
	printf("Value stored at address stored in p:%d\n", *p);		//Value stored at address stored in p
	p++;
	printf("Value stored in p:%d\n", p);		//Value stored in p
	printf("Value stored at address stored in p:%d\n", *p);		//Value stored at address stored in p
	
	/*
		POINTERS AND ARRAYS
	*/
	printf("\n\n");
	
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int *a;
	a=&arr[0];
	printf("Value stored at address which is stored in a which is arr[0]%d\n", *a);		//Value stored at address which is stored in a which is arr[0]
	a++;		//Taking the pointer from arr[0] to arr[1]
	printf("Value stored at address which is stored in a which is arr[1]%d\n", *a);		//Value stored at address which is stored in a which is arr[1]
	
	printf("Printing array using loop and pointer  ");
	for(a=&arr[0]; a<=&arr[9]; a++)		//Printing array using loop and pointer
		printf("%d ", *a);
	
	/*
		FIND MAXIMUM NUMBER IN AN ARRAY USING ONLY POINTERS
			I have used a maximum pointer to store the maximum number and a pointer 'a' for scanning and printing
	*/
	printf("\n\n");
	int ar[5];
	int *max;		//Pointer to store max value
	
	printf("Enter the array:\n");
	//Scanning the array
	for(a=&ar[0]; a<=&ar[4]; a++)
		scanf("%d", a);
	
	//Printing the array
	printf("The array is:\n");
	for(a=&ar[0]; a<=&ar[4]; a++)
		printf("%d ", *a);
	
	//Finding max number
	max=&ar[0];		//max pointer points at beggining of array
	for(a=&ar[0]; a<=&ar[4]; a++)
		if(*a>*max)		//Pointer a compares every value in array with pointer max
			max=a;			//When if condition is satisfied, pointer max will store the value which is stored in a
	printf("\nMaximum value: %d", *max);	//Printing maximum value
	
}
