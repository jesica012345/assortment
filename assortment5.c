#include <stdio.h>
int main()
{
   int r, n, i, j, matrix[10][10], transpose[10][10];
   printf("Enter rows and colurns :\n");
   scanf("%d%d", &r, &n);
   printf("Enter elerents of the matrix:\n");
   for (i= 0; i < r; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf("%d", &matrix[i][j]);
   	  }	
   	  printf("\n");
	}
	for (i= 0; i < r; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf("%d\t", matrix[i][j]);
   	  }	
   	  printf("\n");
	}
   for (i = 0;i < r;i++)
    {
   
      for (j = 0; j < n; j++)
	  {
	  
         transpose[j][i] = matrix[i][j];
      }
      printf("\n");
	}
   printf("Transpose of the matrix:\n");
   for (i = 0; i< n; i++) 
   {
      for (j 0; j<r; j++)
      {
         printf("%d  ", transpose[i][j]);
      }
      printf("\n");
   }

}
