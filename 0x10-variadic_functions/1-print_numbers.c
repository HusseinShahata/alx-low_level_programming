#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number arguments passed to it
 *
 * @separator: the separator string or character
 * @n: number of arguments excluding the separator
 * @...: arguments
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(ads);
	unsigned int i = 0;

	va_start(ads, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ads, unsigned int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ads);

	printf("\n");
}
