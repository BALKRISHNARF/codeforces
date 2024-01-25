#include<stdio.h>
#include<string.h>
void stringcopy1();
void stringcopy2();

char str1[100], str2[100],a[100],b[100];
    int i;

int main() 
{
	
 stringcopy1();
 stringcopy2();
  
 return 0;   
}

void stringcopy1()
{
	printf("\n1)A way where two strings are scanned but one string copied to another completely\n");
	printf("Enter First String :\n");
    gets(str1);
    printf("Enter Second String :\n");
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
    {
    	str2[i]=str1[i];
	}
	
	str2[i]='\0';
	printf("\nResult after copying str1 to str2 is %s",str2);
}

void stringcopy2()
{
	printf("\n******************************2nd copy where only first string is copied to another***********\n");
	printf("Enter First String :\n");
    gets(a); 
    
    for(i=0;a[i]!='\0';i++)
    {
    	b[i]=a[i];
	}
	
	b[i]='\0';
	printf("2)copy where only first string scanned is copied to another*");
	printf("\nSecond String result:%s",b);
}


