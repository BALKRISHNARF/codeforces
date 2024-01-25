#include <stdio.h>
#include <string.h>

void fun(char *arr)
{
	int i;
	int n = strlen(arr);
	printf("n = %d\n", n);
	for (i = 0; i<n; i++)
		printf("%c ", arr[i]);
}

// Driver program
int main()
{
	char arr[100];
	gets(arr);
	fun(arr);
	return 0;
}
