#include<stdio.h>
main()
{
	int a[100][100],sum=0;
	int i,j,n,n1;
	printf("Enter row size of A: ");
	scanf("%d",&n);
	printf("Enter column size of A: ");
	scanf("%d",&n1);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	
	printf("Daigonal Sum = %d\n",sum);
}
