#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
   
     printf("\nprime values are :" );
     printf("\n1\n2\n3\n5\n7");
    for (int i=2;i<=n;i++)
    {
        
        if((i%2&&i%3&&i%5&&i%7)!=0)
        {
            printf("\n%d",i);
        }
       

        
    }
    

    return 0;
    
}