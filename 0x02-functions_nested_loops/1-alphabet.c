#include "main.h"

/**
 * main - check code.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
