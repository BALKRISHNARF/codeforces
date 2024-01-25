#include<stdio.h>
#define m 10
void main()
{
	int a=20;
	
	#if m<11
	printf("%d",a);
	printf("i am good");
	#else
	printf("I am bad");
	#endif
}