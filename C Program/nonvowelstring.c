#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char vow[5]="aeiou";
char VOW[5]="AEIOU";
char a[1000];


int i,j;
bool flag;
void main()
{
	
	gets(a);
	int n=strlen(a);
	int l=strlen(vow);
	
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<l;j++)
		{
			if((a[i]==vow[j]))
			{
				
				a[i]=',';
					
		    }
     	}
     	
	}

		
a[i]='\0';
	for(i=0;a[i]!='\0';i++){
		if(a[i] != 44){
			printf("%c",a[i]);
		}
	} 		
   	
	
	
}