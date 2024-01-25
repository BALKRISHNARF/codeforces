#include<stdio.h>
void main()
{
	int a[5],i,key,flag;
	
	printf("Enter array alements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Key");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key==a[i])
		{
			
			flag=1;
			break;
		}
		
				
	}
	
	if(flag==1)
	{
		printf("Scanned key:%d is present at pos:%d",key,i);
	}
	else
	{
		printf("key is not present");
	}
}