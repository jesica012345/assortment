#include<stdio.h>

void main()
{
    int matrix[12][12];
    int i,j,r,c,sum=0;
    printf("Enter the size for Row and Column:-\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements for matrix:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The matrixrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+matrix[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
