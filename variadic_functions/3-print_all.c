#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - Prints anything based on the format specified.
 * @format: A list of types of arguments passed to the function.
 */

void print_all(constchar * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *str, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] = 'c' || format[i] == 'i' || format[i] == 'f' || format{i} == 's')
		{
			printf("%s", separator);
			separator = ", ";
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
						printf("%s", str);
						break;
			}

		}
		i++;
	}
	printf("\n");
	va_end(args);
}