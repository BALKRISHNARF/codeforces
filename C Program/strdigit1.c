#include<stdio.h>
#include<string.h>
#include<ctype.h>
int count,i,j;

void main()
{
	char a[1000],p[1000];
    char s[1000];
	printf("Enter value of string:");
	gets(a);
	int len=strlen(a);
	for(i=0;i<=len;i++)
	{
		{
			p[i]=a[i];
			
		}
		else if(isdigit(a[i]))
		{   
			count++;
			s[i]=a[i];
    	}	
	}
	  
     printf("%s",s);
     printf("\n");
	if(count==3)
	{
		printf("%s has scored century",p);    
	}
	else  
	{
		printf("%s has not scored century",p);
	}
}