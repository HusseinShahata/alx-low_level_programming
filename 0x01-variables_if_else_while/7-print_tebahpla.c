#include <stdio.h>

/**
 * main - prints alphabet in reverse
(*
 * Return: 0 on success
 *
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
