#include <stdio.h>

int main()
{
    // Declare and initialize an array
    int numbers[] = {1, 3, 5, 7, 9};
    // Determine the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    // Initialize a variable to hold the sum
    int sum = 0;
    // Calculate the sum of all elements
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    // Print the sum
    printf("the sum of all elements of the array is: %d\n", sum);

    return (0);
}
