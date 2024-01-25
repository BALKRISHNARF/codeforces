#include <stdio.h>
//example with macrocontinuation and stringis operator
#define  message_for(a, b)  \
   printf(#a " and " #b ": Lets have fun!\n")

int main(void) {
   message_for(Carole, Debra);
   return 0;
}