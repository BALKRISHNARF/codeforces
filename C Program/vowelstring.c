#include<stdio.h>
void main()
{
	char a[100];
	int counta=0,counte=0,counti=0,counto=0,countu=0;
	printf("Enter  string\n");
	gets(a);
	for(int i=0;a[i]!='\0';i++)
	{
		(a[i]=='a'||a[i]=='A') ? ++counta:(a[i]=='e'||a[i]=='E')?++counte:(a[i]=='i'||a[i]=='I')?++counti:(a[i]=='o'||a[i]=='O')?++counto:(a[i]=='u'||a[i]=='U')?++countu:0;	
	}
	
	printf("Counta:%d\nCounte:%d\nCounti:%d\nCounto:%d\nCountu:%d",counta,counte,counti,counto,countu);
}