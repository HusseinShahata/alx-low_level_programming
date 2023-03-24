#include <main.h>

/**
 * _isdigit -  Writes a function that checks for a digit (0 through 9).
 *
 * @c: character integer.
 * 
 * Returns: 1 if c is a digit 0 otherwise.
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
