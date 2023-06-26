#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - Write a function that prints strings
  * , followed by a new line.
  *
  * @separator: string to be printed between numbers.
  *
  * @n: number of integers passed to the function.
  *
  * Return: void.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ads;
	unsigned int i;
	const char *str;

	va_start(ads, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ads, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
