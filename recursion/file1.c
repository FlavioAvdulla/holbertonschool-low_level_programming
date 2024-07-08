#include <stdio.h>

int main()
{
    // Declare and initialize an array
    int numbers[] = {1, 3, 5, 7, 9};
    // Determine the size of the array
    int size = sizeof(numbers) / sizeof (numbers[0]);
    // Initialize the minimum element to the first element of the array
    int min = numbers[0];

    // Loop through the array to find the minimum element
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }

    }
    // Print the minimum element
    printf("the smallest element in the array is: %d\n", min);

    return (0);
}
