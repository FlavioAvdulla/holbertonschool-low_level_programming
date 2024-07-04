#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - prints a string followed by a new line
* @s: the string to print
*/
void _puts_recursion(char *s) {
    if (s*)
	{
		_puts_recursion(s + 1);
		putchar(*s);
	}
	else
	putchar('\n');
}