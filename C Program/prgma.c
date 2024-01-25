#include<stdio.h>
void init();
void end();
//replace of #pragmafor startup and exit as it wont work in GCC compiler
void __attribute__((constructor)) init();  //#pragma startup
void __attribute__((destructor)) end();    //#pragma exit

void init() 
{
   printf("\nI am in init function");
   
}
void end() 
{
   printf("\nI am in end function");
   
}
int main() {
   printf("\nI am in main function");
   return 0;
}
