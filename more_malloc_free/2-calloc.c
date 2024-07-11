#include <stdlib.h>
#include "main.h"

/**
* _calloc - Allocates memory for an array, using malloc.
* @nmemb: Number of elements in the array.
* @size: Size of each element in bytes.
*
* Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
* or if malloc fails. The memory is set to zero.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
