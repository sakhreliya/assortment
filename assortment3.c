#include<stdio.h> 
main()
{
    int a[1000],i,n,j,k,temp;
   
    printf("Enter a value: ");
    scanf("%d",&n);
    
    printf("Enter elements in value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("how many times right rotate: ");
    scanf("%d",&k);
     
    for(i=0;i<k;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
        {
           a[j]=a[j-1];
		}
 
         a[j]=temp;
    }
    
    printf("\narray elements right rotate: ");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
    
}
