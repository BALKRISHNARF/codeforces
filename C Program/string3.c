#include<stdio.h>
#include<string.h>

void main()

{
	char a[]="abhijithPWIOI";
	char b[]="abhijithPWIOI";
	char c[]="abhijith123";

	
	printf("%d\n",strcmp(a,b));
	int result=strcmp(c,a);
	printf("%d",result);

}