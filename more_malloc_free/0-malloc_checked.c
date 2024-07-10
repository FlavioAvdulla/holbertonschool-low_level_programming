#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory, or cause normal process termination with status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)

{
	void *ptr;
	
	ptr = malloc(b);
	if (ptr = NULL)
		exit (98);

	return (ptr);

}