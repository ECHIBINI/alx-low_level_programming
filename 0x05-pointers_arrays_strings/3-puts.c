#include <stdio.h>
#include "main.h"

/**
 * _puts.c - prints a string
 * @str: string to print
 * Description: prints a string
 * on success: returns no error
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*(str);
	}
	_putchar('\n');
}	
