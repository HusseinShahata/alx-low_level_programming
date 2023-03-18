#include <stdio.h>

/*
 *main - Write a program that prints all possible different combinations of three digits
 *Numbers must be separated by , followed by a space
 *The three digits must be different.
 *
 *
 * Returns: Always 0 success
 */

int main(void)
{
	int i = '0';
	int j = '0';
        int k = '0';
	
	for(i = '0'; i <= '9'; i++)
	{
		for(j = i + 1; j <= '9'; j++)
		{
			for(k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
					if(i == '7' && j == '8' && k == '9');
					continue;
				putchar(,);
				putchar(' ');
			}
		}
	}
	return (0);
}
