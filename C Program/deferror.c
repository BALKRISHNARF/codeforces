#include<stdio.h>

#define POWER 1

#if !defined POWER
#error POWER is not defined or is less than 2
#endif

int main()
{
    printf("Hey if condition directive is working");
	return 0;
}
