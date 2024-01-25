#include<stdio.h>
#include<string.h>

int main() {

    char str1[100], str2[100];
    int i=0,j=0;

    printf("Enter First String :");
    gets(str1);
	//gets(str1); 

    printf("Enter Second String :");
    gets(str2); 

    
	
	//this loop increments i till it reaches end of character '/0'
    while(str1[i]!='\0')
    {
		i++;
    } 
 
   /* This loop would concatenate the string str2 at
    * the end of str1
    */
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   // \0 represents end of string
   str1[i]='\0';
   printf("\nOutput of concat is : %s",str1);
    
    
    
    return 0;
}