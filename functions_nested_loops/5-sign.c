#include "main.h"

/**
 * _print_sign - checks if it is a symbol
 * @c: char passed as argument
 * Return: 1 if c is greater than zero
 */
int print_sign(int n)
{
	if(n > 0)
	{
	putchar('+');
	return(1);
	}
	
	else if(n == 0)
	
	{
	putchar('+');
	return(0);
	}
	
	else
	
	{
	putchar('-');
	return(-1);
	}
}
