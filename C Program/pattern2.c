//pattern1 
#include <stdio.h> 

int main() 
{ 
	int rows; 
	printf("Enter row of pattern\n");
	scanf("%d",&rows);

	// first loop for printing rows 
	for (int i = 0; i < rows; i++) { 

		// second loop for printing character in each rows 
		for (int j = 1; j <= i; j++) { 
			printf("%d ",j*2); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
