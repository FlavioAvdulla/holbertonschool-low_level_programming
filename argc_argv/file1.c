#include <stdio.h>

int main()

{
	int numbers[] = {1, 2, 3, 4, 5, 6};

	printf("Element at index 0 is: %d\n", numbers[0]);
	printf("Element at index 1 is: %d\n", numbers[1]);
	printf("Element at index 2 is: %d\n", numbers[2]);
	printf("Element at index 3 is: %d\n", numbers[3]);
	printf("Element at index 4 is: %d\n", numbers[4]);

	numbers[2] = 16;
	numbers[4] = 12;
	numbers[3] = 6;

	printf("Elements at index 2 is: %d\n", numbers[2]);
	printf("Elements at index 4 is: %d\n", numbers[4]);
	printf("Elements at index 3 is: %d\n", numbers[3]);


	return (0);
}