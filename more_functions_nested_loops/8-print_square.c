#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square, followed by a new line.
 * @size: The size of the square.
 *
 * Description: This function prints a square consisting of '#' characters.
 * If the value of size is 0 or negative, it only prints a newline
 * character.
 */
void print_square(int size)

{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
			_putchar ('#');
		_putchar ('\n');
	}
}
