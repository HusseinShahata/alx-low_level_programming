#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: unsigned integer.
 *
 * Return: sum or zero.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int sum = 0;

	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		int value = va_arg(args, unsigned int);

		sum += value;
	}

	va_end(args);

	if (n == 0)
	{
		return (0);
	}
	return (sum);
}
