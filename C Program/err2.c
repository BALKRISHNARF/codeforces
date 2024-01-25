#include<stdio.h>
#define value 99
 
void main(){  

              

          printf("%d\n",value);
             #if value>100 
             #error OMG!!
           #else
          printf("\n%d",value+1);
          #endif
     
}  

