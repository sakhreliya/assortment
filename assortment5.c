#include<stdio.h>
main()
{
   int m,n,i,j,a[100][100],b[100][100];
   printf("Enter value rows and columns: ");
   scanf("%d%d",&m,&n);
   
   printf("Enter elements: ");
   for (i=0;i<m;i++)
	{
      for (j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);
      }   
    }     
   for (i=0;i<m;i++)
    {
         for (j=0;j<n;j++)
         {
         b[j][i] = a[i][j];
         }
    }
         
   printf("Transpose of matrix: ");
   for (i=0;i<n;i++) 
   {
      for (j=0;j<m;j++)
      {
         printf("%d\t",b[i][j]);
      }
      printf("\n");
   }

}
