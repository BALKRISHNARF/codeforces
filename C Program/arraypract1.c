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
	
     p=a[0];
     
	
	for(i=0;i<n;i++)
	{
	 	 a[i]=a[i+1];	 
	}
	a[i-1]=p;
	
	for(i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
    }
	
}