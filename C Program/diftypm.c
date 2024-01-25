#include<stdio.h>
# define m 10
void main()
{
	typedef int var;
	var a,x;
	float b;
	
	a=m;
	a=a+1;
	b=m;
	x=(int)(b);
	printf("%d\n%d\n%.2f",a,x,b);
}