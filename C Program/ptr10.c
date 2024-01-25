#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="quiz";
	
	int *p;
    int len=strlen(a);
   
    p=&len;
    
    printf("%c",a[*p-2]);
	
}