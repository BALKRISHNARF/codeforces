// C program to illustrate calling
// main() function in main() itself
#include "stdio.h"

// Driver Code
int main()
{

	// Declare a static variable
	int a = 10;

	// Condition for calling main()
	// recursively
	if (a > 0) {
		printf("%d ", a);
		a--;
		main();
	}
}
