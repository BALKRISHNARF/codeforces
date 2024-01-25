
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
	int otp;
	char a,b='y';
            //*******************
			srand(time(NULL));
            int num1=rand()%1000;
            printf(" OTP generated is %d got to your mail or mobile number\n",num1);
            printf("\nHi------------------User interface----------\nEnter character\n");
            scanf("%c",&a);
            printf("otp u are entering in interface\n");
            scanf("%d",&otp);
			
			//************
			if(a==b&&num1==otp)
    {
    	printf("Hey welcome to home page of PWIOI");
	}
	
	else
	{

	printf("kindly provide char and otp properly");

	}	

return 0;
}
 	


     
    
    
    
