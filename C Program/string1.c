
#include<stdio.h>
void main()

{
	char a[]="abhijith PWIOI";
	char b[]={'h','e','l','l','o','\0'};
	//print single character if particular index is called
	printf("value at index 2 of array a is %c\nvalue of index 3 of array b is %c\n",a[2],b[3]);
	
	//prints string bec %s is used to print group of characters
	printf("***********\n");
	printf("array of characters a is :%s\n",a);
	//but there is a problem in below scenario when called %s
	printf("\narray of characters b is :%s\n",b);
}
