#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0.
 */
int is_number(char *str)
{
while (*str) {
	if (!isdigit(*str)) {
		return (0);
	}
	str++;
}
return (1);
}

int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1) {
	printf("0\n");
	return (0);
}

for (i = 1; i < argc; i++) {
	if (!is_number(argv[i])) {
		printf("Error\n");
		return 1;
	}
	sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
