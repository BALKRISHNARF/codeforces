#include<stdio.h>
#include<string.h>
int count,i;
void main()
{
	char a[1000];
	char p[1000];
	char s[1000];
	
	
	printf("Enter value of string:");
	gets(a);
	int len=strlen(a);
	for(i=0;i<=len;i++)
	{
		if(a[i]!=32)
		{
			p[i]=a[i];
		}
		if(a[i]>=48&&a[i]<=57)
		{
		
		count++;
    	}
	}
	
	
	

	
	if(count==3)
	{
		printf("%s has scored century score",p);
	}
	else  
	{
		printf("%s has not scored century score",p,s);
	}
}