#include <stdio.h>

/**
 * main - print numbers from 00 to 99.
(*
 * Return: Always 0
 */

int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '9')
	{
		while (j <= '9')
		{

			if (i == j)
			{
				j++;
				putchar('\n');
			}
			else
			{
				putchar(',');

				putchar(' ');
			}
			putchar(i);

			putchar(j);
			j++;

		}
		if (j >= '9')
		{
			j = '0';
		}
		i++;
	}
	return (0);
}

