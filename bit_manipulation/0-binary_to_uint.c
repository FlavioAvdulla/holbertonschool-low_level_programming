#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string of 0 and 1 chars.
* Return: The converted number, or 0 if there is an invalid character
* or if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, len = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			sum += (1 << (len - i - 1));
	}

	return (sum);
}
