#include<stdio.h>
void main()
{
	int n,sum;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
      sum+=i;		
	}
	
	printf("sum=%d",sum);
}