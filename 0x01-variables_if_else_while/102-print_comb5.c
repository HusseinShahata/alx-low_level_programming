#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j;

	int k, l;

	for ((i = '0'); i <= '9'; i++)
	{
		for ((j = '0'); j <= '9'; j++)
		{
			for ((k = '0'); k <= '9'; k++)
			{
				for ((l = k + 1); l <= '9'; l++)
				{
					putchar(i);

					putchar(j);

					putchar(' ');

					putchar(k);

					putchar(l);

					if ((i == '9') && (j == '8') && (k == '9') && (l == '9'))
					continue;

					putchar(',');

					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
