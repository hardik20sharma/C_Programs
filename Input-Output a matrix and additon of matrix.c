//Input-Output of matrix, Addidition of Two Matrix
#include<stdio.h>

void main()
{
	int matrix1[3][3], matrix2[3][3], sum_matrix[3][3], i , j;
	
	printf("Enter the values for the matrix 1: \n");
	for(i=0; i<3; i++)		//Inputing the matrix1
		for(j=0; j<3; j++)
			scanf("%d",&matrix1[i][j]);
	
	for(i=0; i<3; i++)		//Outputing the matrix1
	{
		for(j=0; j<3; j++)
			printf("%d ", matrix1[i][j]);
		printf("\n");		
	}
	
	printf("Enter the values for the matrix 2: \n");
	for(i=0; i<3; i++)		//Inputing the matrix2
		for(j=0; j<3; j++)
			scanf("%d",&matrix2[i][j]);
	
	for(i=0; i<3; i++)		//Outputing the matrix2
	{
		for(j=0; j<3; j++)
			printf("%d ", matrix2[i][j]);
		printf("\n");		
	}
	
	for(i=0; i<3; i++)		//Calculating sum_matrix and printing it
	{
		for(j=0; j<3; j++)
		{	sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
		 	printf("%d ", sum_matrix[i][j]);
		}
		printf("\n");
	}
}
