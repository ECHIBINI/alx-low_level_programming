#include <stdio.h>
#include "main.h"

/**
 * _puts.c - prints a string followed by a new line
 * @str: string to print
 *
 * Description: prints a string
 * on success: rturns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
	putchar(*(str + i));
	i++;
	}
}	
