#include<stdio.h>
void disp(int);
void main()
{
   int n;
   printf("Enter the value of n:");
   scanf("%d",&n);	
	for(int i=1;i<=n;i+=2)
	{
		disp(i);
	}
}

void disp(int a)
{
	printf("\n%d",a);
}