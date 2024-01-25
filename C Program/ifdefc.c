#include <stdio.h>   
#define NOSCAN 
void main() {  
int a=0;  
#ifndef NOSCAN  //value be true: 1
a=6;  
#else  
printf("Enter a:");  
#endif         

printf("Value of a: %d\n", a);  

  
} 