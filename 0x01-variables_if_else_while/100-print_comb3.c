#include <stdio.h>

/**
 * main - print numbers from 00 to 99.
(*
 * Return: Always 0
 */

int main(void)
{
	int i = '1';
	int j = '0';

	while (i <= '8')
	{
		while (j <= '9')
		{
			putchar(i);

			putchar(j);

			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');

				putchar(' ');
			}

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

