
#include<stdio.h>
int  a,b=0;
int num,i,n;
void main()
{
	
   printf("Enter the Maximum amount of Numbers :: ");
   scanf("%d", &n);
   printf("\n*****\n");
   printf("\nEnter the Number:\n");
   sl();
}
   
   void sl()
   { 
   
   for(i=0; i<n; i++)
   {
     
     scanf("%d", &num);
     if (num > a)
     {
       b = a;
       a = num;
     }
     else if (num > b)
       b = num;
   }
   printf("\n\n Second Highest Number is :: %d",b);
}