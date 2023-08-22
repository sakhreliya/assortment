#include<stdio.h>
main() 
{
  int a[100][100],b[100][100],sum[100][100],i,j,n,m;
  printf("Enter a value rows: ");
  scanf("%d", &n);
  printf("Enter a value coloumns: ");
  scanf("%d", &m);

  printf("\nEnter elements of rows:\n");
  for (i=0;i<n;i++)
  {
    for (j=0;j<m;j++) 
	{
      printf("a[%d][%d]:",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  }

  printf("Enter elements of column:\n");
  for (i=0;i<n;i++)
  {
    for (j=0;j<m;j++) 
	{
      printf("b[%d][%d]::",i+1,j+1);
      scanf("%d",&b[i][j]);
    }
  }

  for (i=0;i<n;i++)
  {
    for (j=0;j<m;j++) 
	{
      sum[i][j]=a[i][j]+b[i][j];
    }
  }	
  
  printf("\nAddition of two matrices: \n");
  for (i=0;i<n;i++)
  {
    for (j=0;j<m;j++) 
	{
      printf("%d  ",sum[i][j]);
      if(j==m-1) 
	  {
        printf("\n");
      }
    }
  }
}

