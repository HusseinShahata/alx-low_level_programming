#include <main.h>

/**
 * _isdigit -  Writes a function that checks for a digit (0 through 9).
 *
 * Returns: 1 if c is a digit 0 otherwise.
 *
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);

	else
		return (0);
}
