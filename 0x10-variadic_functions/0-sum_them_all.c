#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sums all the arguments passed to the function.
 *
 * @n: The number of arguments provided.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: Sum or zero.
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list ars;

	unsigned int i = 0;

	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ars, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ars, unsigned int);

	va_end(ars);

	return (sum);
}
