//Decimal to Binary
//Hardik Sharma - 18BCG10044
#include<stdio.h> 
void main()
{
    int decimal, decimal_store, remainder, base = 1, binary = 0;
 
    printf("Enter a decimal integer: \n"); scanf("%d", &decimal);
    
	decimal_store = decimal;
    while(decimal>0)
    {
        remainder=decimal%2;
        binary+=(remainder*base);
        decimal/=2;
        base*=10;
    }
    printf("Input number is = %d\n", decimal_store);
    printf("Its binary equivalent is = %d", binary);
}
