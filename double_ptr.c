#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void input_2d_array(int** mat, int rows, int cols);
int** take_input_2d_array(int rows, int cols);
int** add_2d_arrays(int** mat1, int** mat2, int m, int n);

int main()
{
  int rows = 0, cols = 0;
  printf("Enter values of rows and columns: ");
  scanf("%d %d", &rows, &cols);

  printf("Enter values for matrix 1\n");
  int** mat1 = take_input_2d_array(rows, cols);

  printf("Enter values for matrix 2\n");
  int** mat2 = take_input_2d_array(rows, cols);

  /* Pass arrays to function using double ptrs and print result */
  int** added = add_2d_arrays(mat1, mat2, rows, cols);
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
        {
          printf("%d ", added[i][j]);
        }
      printf("\n");
    }

  return 0;
}

int** take_input_2d_array(int rows, int cols)
{
  int** mat= (int**) malloc(sizeof(int*) * rows);
  for (int i = 0; i < rows; i++)
    {
      mat[i] = (int*) malloc(sizeof(int) * cols);
      for (int j = 0; j < cols; j++)
        {
          scanf("%d", &mat[i][j]);
        }
    }
  return mat;
}

/* Takes input of 2D array as double ptr */
int** add_2d_arrays(int** mat1, int** mat2, int m, int n)
{
  int** res = (int**) malloc(sizeof(int*) * m);
  for (int i = 0; i < m; i++)
    {
      res[i] = (int*) malloc(sizeof(int) * n);
      for (int j = 0; j < n; j++)
        {
          res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
  return res;
}
