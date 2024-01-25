#include<stdio.h>
void main()
{
	int a[5];
	printf("Enter array alements\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("array alements are \n");
	
	for(int i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	
}