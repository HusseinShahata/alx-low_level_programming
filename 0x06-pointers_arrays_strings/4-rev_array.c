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
	int i, temp;

	for (i = 0; i < n / 2; i++, n--)
		temp = a[i], a[i] = a[n], a[n] = temp;
}
