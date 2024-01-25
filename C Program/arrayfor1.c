#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};

	for(int i=0;i<5;i++)
	{
		a[i]=a[i+1];
	}

	printf("result after changes in array is:\n");
	for(int i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
}