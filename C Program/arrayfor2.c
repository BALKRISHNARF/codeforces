#include<stdio.h>
int temp;
void main()
{
	int a[5]={1,2,3,4,5};

	for(int i=0,n=4;i<5;i++,n--)
	{
		if(i<=n)
		{
			
			temp=a[i];
			a[i]=a[n];
			a[n]=temp;
		}
	}

	printf("result after changes in array is:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}