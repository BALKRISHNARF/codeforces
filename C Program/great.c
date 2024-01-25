// program to find greatest among two using arithmatic and bool(making sure not using anything other than arithmatic)
#include <stdio.h>
#include <stdbool.h>
void main() 
{
  int x,y,num;
  printf("x and y value shouldnt be equal and both shouldnt be negative value\n");
  printf("Enter the value of x\n");
  scanf("%d",&x);
  printf("Enter the value of y\n");
  scanf("%d",&y);
  
   //expression to find greatest of x and y
   num= x * (bool)(x/y) + y * (bool)(y/x);
   
}