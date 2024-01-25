#include <stdio.h>
#include <stdio.h>
void test(int);
void main()
{
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        test(i);
        printf("\n%d",n);
        
    }
    printf("\n********");
   
    
}

void test(int a)
{
   printf("\n%d",a);
   
}   