// Recursive C program to check if the number is palindrome or not
#include <stdio.h>


// recursive function that returns the reverse of digits
int rev(int n, int temp)
{
	// base case
	if (n == 0)
		return temp;

	// stores the reverse of a number
	temp = (temp * 10) + (n % 10);

	return rev(n / 10, temp);
}

// Driver Code
int main()
{

	int n ;
	printf("Enter value of n to check palindrome:");
	scanf("%d",&n);
	
	int temp = rev(n, 0);

	if (temp == n)
		printf("%d is palindrome",n);
	else
		printf("%d is not a palindrome",n);
	return 0;
}
