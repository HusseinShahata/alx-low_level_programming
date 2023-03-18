#include <stdio.h>

/**
 * main -prins all alphabet except letter q and letter e
 *
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
