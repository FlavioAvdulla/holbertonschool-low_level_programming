#include <stdio.h>

int main()
{
    // Declare and initialize an array
    int numbers[] = {1, 3, 5, 7, 9};
    // Determine the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    // Initialize a variable to hold the sum
    int sum = 0;
    // Variable to hold the average
    float average;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    // Calculate the average
    average = (float)sum / size;
    // Print the average
    printf("the average of all elements in array is: %.2f\n", average);

    return (0);
}
