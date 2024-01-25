#include <stdio.h>
// Main function
int main()
{
    int arr1[100], n, ctr;  // Declare an array to store integer values, n for array size, and ctr for counting duplicates
    int i, j;  // Declare loop counters
   
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    // Prompt the user to input n elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  // Read the input and store it in the array
    }
    // Print unique elements in the array
    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < n; i++)
    {
        ctr = 1;  // Reset the counter for each element
        for (j = 0; j < n + 1; j++)
        {
            /* Increment the counter when the search value is duplicate. */
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 1)
        {
            printf("%d ", arr1[i]);  // Print the unique element
        }
    }
    printf("\n\n");
    return 0;  // Return 0 to indicate successful execution
}
