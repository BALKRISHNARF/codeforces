#include<stdio.h>
void main()
{
	int n,x=1,sum=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	while(x<=n)
	{
		sum=sum+x;
		x=x+1;
	}
	
	printf("%d\n",sum);
}