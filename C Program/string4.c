#include<stdio.h>
#include<string.h>

void main()

{
	char a[7]="comba";
	char c[6]="kalta"; 
     
     strcpy(a,c);
     printf("\n%s",a);
     
     printf("len of a: %d",strlen(a));
	


}