#include <stdio.h>
#define m 5+5

//global declaration of n which can be used anywhere in the program const is scope which says i cant change the value
 int n = 5+5;
void main() 
{
	
int a = 0, b = 0;
a = m * m;
b = n * n;
n=n+1;

printf("%d %d\n", a, n);
}