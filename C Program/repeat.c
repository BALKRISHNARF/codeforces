#include<stdio.h>
#include<string.h>
int i=0,j=0;
void main()
{
	char a[1000],b[1000];
	
	printf("Enter the string\n");
	gets(a);
	int len=strlen(a);
	while(a[i]!='\0')
	{
		
		i++;
	}
	
	
	
	int n=i+i;
	for(j=0;i<n;i++,j++)
	{
		a[i]=a[j];
	}
	
	a[i]='\0';
	puts(a);
	
}
	