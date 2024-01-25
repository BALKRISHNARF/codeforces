#include<string.h>
int count;
void main()
{
	char a[1000];
	
	printf("Enter value of string:");
	gets(a);
	int len=strlen(a);
	for(int i=0;i<=len;i++)
	{
		if(a[i]==32)
		{
		
		count++;
    	}
	}
	
	printf("The total spaces in scanned string is :%d",count++);
}