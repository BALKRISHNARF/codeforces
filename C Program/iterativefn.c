#include<stdio.h>
void Function1();
void Function2();
void main()
{
	Function1();
        

}

void Function1()
        {
        	float i=1.2;
        	  void Function2()
              {
                 printf("\n%f",i);
              } 
        	
             for(;i<=5;)
              {
              Function2();
              i++;
              } 
			  
			    
        
         }
