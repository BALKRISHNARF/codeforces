#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int min(int a,int b)
{
	if(a<b)
	return a;
	else
	return b;
}


void main()
{
	int a,b,c,d,max1,min1;
	printf("enter the value of a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max1=max(a,max(b,max(c,d)));
		min1=min(a,min(b,min(c,d)));
    printf("max:%d\nmin:%d",max1,min1);	
    
    
}