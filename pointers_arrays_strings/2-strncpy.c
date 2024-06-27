#include "main.h"

/**
* _strncpy - Copies at most n characters from the string pointed to by src,
* including the null terminator, to the array pointed to by dest.
* If the length of src is less than n, null characters are
* appended until the total of n characters have been copied.
* @dest: A pointer to the destination array where the content is to be copied.
* @src: A pointer to the source of data to be copied.
* @n: The maximum number of characters to be copied from src.
*
* Return: A pointer to the destination string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
for (; i < n; i++)
{
	dest[i] = '\0'; // Null-padding if n > length of src
}

return dest;
}
