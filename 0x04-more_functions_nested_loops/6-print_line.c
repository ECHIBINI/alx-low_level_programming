#include <stdio.h>
#include "main.h"

/**
 * Print_line - prints a straight line
 * @n: parameter
 * Return - returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
	if (n < 0)
	{
	_putchar('\n')
	}
	else
	{
	_putchar('_');
	}
	_putchar('\n')
}
