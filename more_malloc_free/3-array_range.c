#include <stdlib.h>
#include "main.h"

/**
* array_range - Creates an array of integers.
* @min: The minimum value (inclusive).
* @max: The maximum value (inclusive).
*
* Return: A pointer to the newly created array.
* If min > max, return NULL.
* If malloc fails, return NULL.
*/
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
