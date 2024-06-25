#include "main.h"

/**
* _strcpy - Copies the string pointed to by src, including the terminating null byte (\0),
*           to the buffer pointed to by dest.
* @dest: Pointer to the buffer where the string is to be copied.
* @src: Pointer to the source string to be copied.
*
* Return: Pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
char *dest_ptr = dest;

while (*src)
{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
}
*dest_ptr = '\0'; // Add the null terminator

return dest;
}
