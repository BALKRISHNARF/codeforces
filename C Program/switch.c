#include<stdio.h>
void main()
{
	int a=10;
	
	switch(a-=10)
	{
		case 0:printf("h--------------");
		       break;
		case 1:printf("1-------------");
		       break; 
		case 'M':printf("M");
		break;
		
		default:printf("hi");
		
	}
}