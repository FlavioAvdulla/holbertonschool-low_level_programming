#include <stdio.h>

int main()
{
    int numbers[] = {1, 3, 5, 7, 9};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum = 0;
    float average;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    average = (float)sum / size;
    printf("the average of all elements in array is: %.2f\n", average);

    return (0);
}
