#include<stdio.h>
#include<string.h>
int i=0,j,flag=0;
void main()
{
	char a[1000],b[1000];
	
	printf("Enter the string\n");
	gets(a);
	int len=strlen(a);
	while(a[i]!='z')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	
	for(j=0,i=i+1;(a[i]!='\0'||b[j]!='\0');++i,++j)
	{
	    
		if(a[i]==b[j])
		{
	      flag=1;
		}
		else
		flag=0;
		
		
	}
	printf("\nFlag:%d",flag);
	if(flag==1)
	printf("\nString pattern is Correct\n");
	else
	printf("\nString pattern is Incorrect\n");
	
	
	
}