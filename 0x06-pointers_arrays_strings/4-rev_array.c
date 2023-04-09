#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: input array
 * @n: length of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	while (a[n+1] == '\0' && n != -1)
		n--;
}

