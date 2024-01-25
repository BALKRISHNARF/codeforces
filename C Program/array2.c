#include<stdio.h>
void main()
{
	
	int a[5]={1,2,3,4,5};
	a[0]=(6,7,8,9,10);
	a[0]+=a[1]+=a[2]+=a[3];
	printf("%d\n%d\n%d",a[0],a[1],a[2]);
	
}