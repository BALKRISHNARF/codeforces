


#include <stdio.h>


   #define MESSAGE "You wish!"
   #undef (MESSAGE)
   #error P "mess not there"
   


int main(void) {
   printf("Here is the message: %s\n", MESSAGE); 
   P;
    
   return 0;
}