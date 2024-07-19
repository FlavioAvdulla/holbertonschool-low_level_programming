#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything based on the format specified.
* @format: A list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	int printed = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				if (printed)
					printf(", ");
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				if (printed)
					printf(", ");
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				if (printed)
					printf(", ");
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				if (printed)
					printf(", ");
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				printed = 1;
				break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
