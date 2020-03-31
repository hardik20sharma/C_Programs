#include <stdio.h>
 
void main()
{
	int num_rows_1, num_cols_1, num_rows_2, num_cols_2, c, d, k, sum = 0;
	int first[10][10], second[10][10], multiply[10][10];
 	
	printf("Enter number of rows and columns of first matrix\n");
	scanf("%d%d", &num_rows_1, &num_cols_1);
	printf("Enter elements of first matrix\n");
 
	for (c=0; c<num_rows_1; c++)
    	for (d=0; d<num_cols_1; d++)
      		scanf("%d", &first[c][d]);
 
	printf("Enter number of rows and columns of second matrix\n");
	scanf("%d%d", &num_rows_2, &num_cols_2);
	
	if (num_cols_1!=num_rows_2)
	    printf("The matrices can't be multiplied with each other.\n");
	else
	{
    	printf("Enter elements of second matrix\n");
	 
    	for (c=0; c<num_rows_2; c++)
			for (d=0; d<num_cols_2; d++)
        		scanf("%d", &second[c][d]);
	
	    for (c=0; c < num_rows_1; c++) 
		{
			for (d=0; d<num_cols_2; d++) 
			{
				for (k=0; k<num_rows_1; k++) 
					sum=sum+first[c][k]*second[k][d];
 		
				multiply[c][d] = sum;
	        	sum=0;
	    	}
	    }
	
	    printf("Product of the matrices:\n");
    	for (c=0; c<num_rows_1; c++) 
		{
			for (d=0; d<num_cols_2; d++)
				printf("%d\t", multiply[c][d]);
 			printf("\n");
    	}
	}	

}
