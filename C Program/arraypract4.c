#include<stdio.h>
	int n,i,p;
void main()
{
     printf("Enter no of elements in array\n");
     scanf("%d",&n);
     int a[n];
	printf("Enter array alements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
      p=a[i-1];
    
     
	
	for(i=n;i>0;i--)
	{
	 	 a[i]=a[i-1];	 
	}
	a[i]=p;
	
	for(int i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
    }
	
}