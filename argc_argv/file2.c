#include <stdio.h>

int main()
{

int number[] = {1, 2, 3, 4, 5};

int sum = 0;

int size = sizeof(number) / sizeof(number[0]);

	for (int i = 0; i < size; i++)
	{
		sum += number[i];
	}

	printf("The sum of the elements in the array is: %d\n", sum);
	return (0);
}