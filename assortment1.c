#include<stdio.h>
main()
{
	int a[1000],i,n;
	printf("Enter size of the array :");
	scanf("%d",&n);
	
	printf("Enter in array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("negative number value:");
	for(i=0;i<n;i++)
	{
		if(a[i] < 0)
		{
			printf("%d\t",a[i]);	
		}	
	}
}
