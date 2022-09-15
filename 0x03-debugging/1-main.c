#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n"); // prints out the statement 'Infinite loop incoming followed by a newline

        i = 0;

	while (i < 10) // executes the code below as long as i is less than 10
	{
	putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n"); // prints 'infinite loop avoided

        return (0);
}
