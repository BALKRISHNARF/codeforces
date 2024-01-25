#include<stdio.h>
#include<string.h>
int ctr;
int main() {

    char str1[100], str2[100];
    int i,j,len1, len2;

    printf("Enter First String :");
    gets(str1); 

    printf("Enter Second String :");
    gets(str2);

    len1 =strlen(str1);
    len2 = strlen(str2);
    
for(i=0,j=0;(i<len1||j<len2);i++,j++)
{
	if(str1[i]!=str2[j])
	{
		ctr++;
	}
}

if(ctr==0)
{
	printf("Both are equal");
}

else if(len1>len2)
{
	printf("not equal-------:count is %d",ctr);
}
else if(len1<len2)
{
	printf("not equal------:count is -%d",ctr);
}
else
{
	printf("not equal---------: %d",ctr);
}

}