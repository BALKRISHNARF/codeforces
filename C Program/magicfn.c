#include<stdio.h>
int sd(int);
int main() {
    int n,rev=0,temp,m,dig=0;
    printf("Enter the  three digit number where all three digits are different in nature:\n");
    scanf("%d",&n);
    temp=n;
    
    while(n>0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    printf("The reverse number you been scanned is :%d",rev);
   
    
    if(rev>temp)
    m=rev-temp;
    else
    m=temp-rev;
    
   
    dig= sd(m);
    printf("\nMagic number is : %d", dig);
    
    
    

    return 0;
}

int sd(int a)
{
    int sum=0;
    
while(a>0)
    {
         sum = sum + a % 10;
        a = a / 10;
    }
    return sum;
}