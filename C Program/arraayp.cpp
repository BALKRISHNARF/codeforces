#include<stdio.h>

void main()
{
	int a[5]={1,2,3,4,5};
	a[0]=a[1]=a[2]=1;
	printf("%d%d%d",a[0],a[1],a[2]);
	
}