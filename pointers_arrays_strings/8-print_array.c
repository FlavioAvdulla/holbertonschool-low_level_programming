#include <stdio.h>
#include "main.h"

/**
* print_array - Prints n elements of an array of integers, followed by a new line.
* @a: Pointer to the array of integers.
* @n: The number of elements of the array to be printed.
*/
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
	if (i != 0)
	{
		printf(", ");
	}
	printf("%d", a[i]);
}
printf("\n");
}