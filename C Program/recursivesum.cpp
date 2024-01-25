#include <stdio.h>

int series(int n);

int main() 
{

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", series(num));
  return 0;
}

int series(int n) 
{
  if (n != 0)
    { 
	 printf("%d,",n);
     return n + series(n - 1);
    }
  else
    return n;
}