#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments passed to the function
 * @n: the number of arguments provided
 * @...: the arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list as;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(as, n);

	for (i = 0; i < n; i++)
		sum += va_arg(as, int);

	va_end(as);

	return (sum);
}
