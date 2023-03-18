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
			putchar(i);

			putchar(j);

			if (i == '9' && j == '9')
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

