#include<stdio.h>

int main()
{
	int a[50][50],b[50][50],sum[50][50];
	int i,j,r,c;
	
	printf("enter elerents of row =");
	scanf("%d",&r);
	printf("enter elerents of column =");
	scanf("%d",&c);
	
	printf("enter array elerant of A =\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("the array elemant of B =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]= a[i][j]+b[i][j];
		}
	}
	printf("\nsum array =");
	for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
			{
			
		    	printf("\nsum =%d",sum[i][j]);
		    }
    }
		printf("\n");
	
}

