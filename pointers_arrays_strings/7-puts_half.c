#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The string to encode.
*
* Return: Pointer to the encoded string.
*/
char *leet(char *str)
{
char *ptr = str;
char *leet_letters = "aAeEoOtTlL";
char *leet_numbers = "44330771";
int i;

while (*ptr != '\0')
{
	i = 0;
	while (leet_letters[i] != '\0')
	{
		if (*ptr == leet_letters[i])
		{
			*ptr = leet_numbers[i];
			break;
		}
		i++;
	}
	ptr++;
}

return (str);
}
