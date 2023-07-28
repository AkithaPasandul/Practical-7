#include <stdio.h>
int main()
{
  int matrix1[3][3]=
  {
      {3, 2, 4},
      {1, 4, 6},
      {4, 3, 2},
  };
  int matrix2[3][3]=
  {
      {2, 6, 3},
      {4, 3, 2},
      {5, 1, 7},
  };
  int sum_matrix[3][3];
  int i, j;

  for(i =0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
      sum_matrix[i][j]=matrix1[i][j] + matrix2[i][j];
    }
  }

  printf("The sum of the matrices is:\n");
  for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
      printf("%d ", sum_matrix[i][j]);
    }
    printf("\n");
  }

}
