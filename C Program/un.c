#include<stdio.h>

void main()
{
	label1:while(i<=n)
	       {
		     if(i==5||i==10)
		     {
		       i=i+1;
		       continue;
	         }   
		       printf("%d\n",i);
	           i=i+1;
	    }
	
	
	int i=1,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("\n");
	
	 
	    
	    
	
	goto label1;
	
	
	
	
	
	
}