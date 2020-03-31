//Multiplication of Matrix
//Hardik Sharma - 18BCG10044
#include<stdio.h>

void main()
{
	int r1, c1, r2, c2, i, j, k;
	printf("Enter number of rows of matrix 1:"); scanf("%d", &r1);
	printf("Enter number of columns of matrix 1:"); scanf("%d", &c1);
	printf("Enter number of rows of matrix 2:"); scanf("%d", &r2);
	printf("Enter number of columns of matrix 2:"); scanf("%d", &c2);
	
	if(c2!=r1)
	{
		printf("Not possible !!"); return(0);
	}
	int matrix1[r1][c1], matrix2[r2][c2], multiply_matrix[r1][c2];
	
	//Inputing Matrix 1
	printf("Enter matrix 1:\n");
	for(i=0; i<r1; i++)
		for(j=0; j<c1; j++)
			scanf("%d", &matrix1[i][j]);
	
	//Inputing Matrix 2
	printf("Enter matrix 2:\n");
	for(i=0; i<r2; i++)
		for(j=0; j<c2; j++)
			scanf("%d", &matrix2[i][j]);
			
	//Printing Matrix 1
	printf("Matrix 1 is -- \n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
			printf("%d ", matrix1[i][j]);
		printf("\n");		
	}
	
	//Printing Matrix 2
	printf("Matrix 2 is -- \n");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
			printf("%d ", matrix2[i][j]);
		printf("\n");	
	}
	//Multiplying
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			multiply_matrix[i][j]=0;
			for(k=0; k<c1; k++)
				multiply_matrix[i][j]+=matrix1[i][k]+matrix2[k][j];
		}
	}
	
	//Printing Multiply Matrix
	printf("Multiplied Matrix is -- \n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
			printf("%d ", multiply_matrix[i][j]);
		printf("\n");	
	}
}
