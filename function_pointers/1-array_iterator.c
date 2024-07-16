#include "functions_pointers.h"

void array_iteration(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if(array && action)
	{
		for (i = 0l i < size; i++)
		action(array[i]);
	}
}