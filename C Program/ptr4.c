#include <stdio.h>
 

 
int main () {

   int n;
   printf("Entr the number of elements");
   scanf("%d",&n);
   int  var[n];
   
   int i, *ptr[n];
    
   printf("Enter the elements array\n");
   for ( i = 0; i < n; i++) {
   	   scanf("%d",&var[i]);
      ptr[i] = &var[i]; /* assign the address of integer. */
   }
   
   for ( i = 0; i < n; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
   
   return 0;
}