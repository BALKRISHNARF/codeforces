#include <stdio.h>
 
const int MAX = 4;
 
int main () {

   char *names[] = {
      "Alia Bhat",
      "Aishwarya",
      "My buddy",
      "abhi"
   };
   
  
   //int len=strlen(*(names+3));  //*names[3]
   //printf("\n%d\n",len);

   for ( int i=0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, *(names+i));
   }
   
   return 0;
}