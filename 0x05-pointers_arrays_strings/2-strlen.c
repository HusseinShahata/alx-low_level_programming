#include "main.h"

/*
 * int _strlen - Function that returns the length of a string
 *
 */

int _strlen(char *s)
{
	int index;

	for(index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
