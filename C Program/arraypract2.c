#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter range of array elem:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array alements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
	  if(a[i]%2==0)
		{
		printf("\n%d",a[i]);	
		}
        	  
	}

}
	