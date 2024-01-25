#include<stdio.h>
#define PRINT(x, str) ({\
   printf("The number %d", x);\
   printf(" is ");\
   printf(#str);\
   printf("\n");\
})
int main() {
   int x = 10;
   if(x % 2 == 0){
      PRINT(x, ODD);
   }
}