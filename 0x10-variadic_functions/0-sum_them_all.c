#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: unsigned integer.
 * @sum: sum of all parameters.
 * @...: A variable number of paramters to calculate the sum of.
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
		sum += va_arg(args, unsigned int);
	}

	va_end(args);

	return (sum);
}
