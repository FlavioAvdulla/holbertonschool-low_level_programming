#include <stdio.h>

int main()
{
    int numbers[] = {1, 3, 5, 7, 9};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    printf("the sum of all elements of the array is: %d\n", sum);

    return (0);
}
