#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
*           which contains a copy of the string given as a parameter.
* @str: the string to duplicate
*
* Return: a pointer to the duplicated string, or NULL if insufficient memory
*         was available or if str is NULL
*/
char *_strdup(char *str)
{
char *dup_str;
size_t len;

if (str == NULL)
	return NULL;

len = strlen(str);
dup_str = (char *)malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
	return NULL;

strcpy(dup_str, str);

return (dup_str);
}
