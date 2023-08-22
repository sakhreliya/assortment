#include<stdio.h>
main()
{
	int a[100],i,size;
	int n, m;
	
	printf("Enter a value :  ");
	scanf("%d",&size);
	
	printf("\nEnter a number\n", size);
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
    }
	 
	n = m;  
	   
	for (i=0;i<size;i++)
	{
		if(a[i]>n)
		{
			m = n;
			n = a[i];
		}
		else if(a[i]>m && a[i]<n)
		{
			m=a[i];
		}	
	}
	printf("\nThe Second Largest Number:  %d", m);
}
