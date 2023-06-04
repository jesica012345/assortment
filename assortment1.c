#include<stdio.h>

main()

{
	int i,n,a[100];
	
	printf("ENTER THE VALUE OF ARRAY:-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	
	printf("\nNEGATIVE ELEMENTS IN ARRAY.");
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
	}
	printf("\n");
	
}
