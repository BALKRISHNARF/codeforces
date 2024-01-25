#include<stdio.h>  
int main()    
{    
int n,rev=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{        
rev=(rev*10)+n%10;    
n=n/10;    
}    
if(temp==rev)    
printf(" %d is palindrome number",temp);    
else    
printf(" %d is not palindrome number",temp);   
return 0;  
} 