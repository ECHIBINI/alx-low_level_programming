#include <stdio.h>

/**
 * prints the alphabet in lowercase, followed by a new line.
 * return(0)
 */

int main(void)

{
	char letter;

	for (letter ='a'; letter <='z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');

	Return(0)
}
